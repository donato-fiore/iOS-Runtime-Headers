// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBDOMAINATTRIBUTETEMPLATE_H
#define RBDOMAINATTRIBUTETEMPLATE_H

@class NSString, NSDictionary, NSArray;
@protocol RBAttributeTemplateConfiguring;

#import <Foundation/Foundation.h>

#import "RBEntitlementPredicate.h"
#import "RBDomainRestriction.h"

@interface RBDomainAttributeTemplate : NSObject <RBAttributeTemplateConfiguring>

 {
    NSString *_domain;
    NSString *_name;
    NSString *_endowmentNamespace;
}


@property (copy, nonatomic) NSDictionary *additionalRestrictions; // ivar: _additionalRestrictions
@property (retain, nonatomic) NSArray *attributeGroups; // ivar: _attributeGroups
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) RBEntitlementPredicate *originatorEntitlements; // ivar: _originatorEntitlements
@property (copy, nonatomic) RBDomainRestriction *restriction; // ivar: _restriction
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *targetBundleProperties; // ivar: _targetBundleProperties
@property (copy, nonatomic) RBEntitlementPredicate *targetEntitlements; // ivar: _targetEntitlements




@end


#endif