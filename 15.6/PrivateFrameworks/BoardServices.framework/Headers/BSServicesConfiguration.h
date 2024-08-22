// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSSERVICESCONFIGURATION_H
#define BSSERVICESCONFIGURATION_H

@class NSDictionary, NSOrderedSet, NSString, NSSet;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BSServicesConfiguration : NSObject <BSDescriptionProviding>

 {
    NSDictionary *_domainsByIdentifier;
    NSOrderedSet *_orderedDomains;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *domains;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)activateManualDomain:(id)arg0 ;
+(id)bootstrapConfiguration;
+(id)defaultConfiguration;
+(id)extendAutomaticBootstrapCompletion;
+(id)registerDynamicDomainsFromPlist:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)domainForIdentifier:(id)arg0 ;
-(id)domainForMachName:(id)arg0 ;
-(id)domainsContainingServiceIdentifier:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif