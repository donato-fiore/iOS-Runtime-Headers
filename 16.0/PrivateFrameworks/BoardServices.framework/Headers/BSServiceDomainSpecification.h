// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSSERVICEDOMAINSPECIFICATION_H
#define BSSERVICEDOMAINSPECIFICATION_H

@class NSDictionary, NSOrderedSet, NSSet, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding>

 {
    NSDictionary *_servicesByIdentifier;
    NSOrderedSet *_orderedServices;
    NSUInteger _start;
    NSSet *_derivedServiceRestrictions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *machName; // ivar: _machName
@property (readonly, copy, nonatomic) NSSet *services;
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)serviceForIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif