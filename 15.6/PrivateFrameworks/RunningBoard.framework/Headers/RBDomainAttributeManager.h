// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBDOMAINATTRIBUTEMANAGER_H
#define RBDOMAINATTRIBUTEMANAGER_H

@class NSDictionary, NSString;
@protocol RBDomainAttributeManaging, RBStateCapturing, RBDomainAttributeDataProviding;

#import <Foundation/Foundation.h>


@interface RBDomainAttributeManager : NSObject <RBDomainAttributeManaging, RBStateCapturing>

 {
    NSDictionary *_domainAttributeTemplatesByDomain;
    id<RBDomainAttributeDataProviding> *_dataProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;


-(BOOL)areTargetPropertiesValidForContext:(id)arg0 forAttributeWithDomain:(id)arg1 andName:(id)arg2 ;
-(BOOL)containsAttributeWithDomain:(id)arg0 andName:(id)arg1 ;
-(id)additionalRestrictionsForDomain:(id)arg0 andName:(id)arg1 ;
-(id)allEntitlements;
-(id)attributesForDomain:(id)arg0 andName:(id)arg1 context:(id)arg2 withError:(*id)arg3 ;
-(id)captureState;
-(id)endowmentNamespaceForDomain:(id)arg0 andName:(id)arg1 ;
-(id)initWithDataProvider:(id)arg0 ;
-(id)originatorEntitlementsForDomain:(id)arg0 andName:(id)arg1 ;
-(id)restrictionsForDomain:(id)arg0 andName:(id)arg1 ;
-(id)targetEntitlementsForDomain:(id)arg0 andName:(id)arg1 ;


@end


#endif