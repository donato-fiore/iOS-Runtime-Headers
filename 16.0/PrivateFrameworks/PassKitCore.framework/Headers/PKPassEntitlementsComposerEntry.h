// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSENTITLEMENTSCOMPOSERENTRY_H
#define PKPASSENTITLEMENTSCOMPOSERENTRY_H

@class NSString;
@protocol PKPassEntitlementsComposerView, PKIdentifiable, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPassEntitlementsComposer.h"
#import "PKDisplayablePassEntitlement.h"
#import "PKPassShareTimeConfiguration.h"
#import "PKPassSharedEntitlement.h"

@interface PKPassEntitlementsComposerEntry : NSObject <PKPassEntitlementsComposerView, PKIdentifiable>

 {
    BOOL _enabled;
    BOOL _isUsingAdvancedScheduling;
    PKPassEntitlementsComposer *_parentEntitlementComposer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKDisplayablePassEntitlement *displayableEntitlement; // ivar: _displayableEntitlement
@property (nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) BOOL isUsingAdvancedScheduling;
@property (nonatomic) NSUInteger manageability;
@property (readonly, nonatomic) NSUInteger possibleManageability;
@property (readonly, nonatomic) NSUInteger possibleShareability;
@property (readonly, nonatomic) PKPassShareTimeConfiguration *possibleTimeConfiguration;
@property (readonly, nonatomic) NSUInteger possibleVisibility;
@property (nonatomic) NSUInteger shareability;
@property (retain, nonatomic) PKPassSharedEntitlement *sharedEntitlement; // ivar: _sharedEntitlement
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) NSUInteger visibility;


-(id)init;


@end


#endif