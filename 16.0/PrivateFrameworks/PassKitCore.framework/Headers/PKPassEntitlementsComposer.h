// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSENTITLEMENTSCOMPOSER_H
#define PKPASSENTITLEMENTSCOMPOSER_H

@class NSArray;
@protocol PKPassEntitlementsComposerView;

#import <Foundation/Foundation.h>

#import "PKPassShareTimeConfiguration.h"

@interface PKPassEntitlementsComposer : NSObject <PKPassEntitlementsComposerView>

 {
    NSArray *_originalSharedEntitlements;
    NSArray *_availableEntitlements;
    NSArray *_entitlementEntrys;
}


@property (readonly, nonatomic) BOOL canAllowResharing;
@property (readonly, nonatomic) NSArray *composeSharedEntitlements;
@property (readonly, nonatomic) BOOL editable; // ivar: _editable
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSArray *entitlementEntries;
@property (nonatomic) BOOL isUsingAdvancedScheduling;
@property (nonatomic) NSUInteger manageability;
@property (readonly, nonatomic) NSUInteger possibleManageability;
@property (readonly, nonatomic) NSUInteger possibleShareability;
@property (readonly, nonatomic) PKPassShareTimeConfiguration *possibleTimeConfiguration;
@property (readonly, nonatomic) NSUInteger possibleVisibility;
@property (nonatomic) NSUInteger shareability;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) NSUInteger visibility;


-(id)globalView;
-(id)init;
-(id)initWithMyEntitlements:(id)arg0 ;
-(id)initWithSharedEntitlements:(id)arg0 availableEntitlements:(id)arg1 editable:(BOOL)arg2 ;
-(id)viewFor:(id)arg0 ;
-(void)_updateEntitlementEntry:(id)arg0 capabilityMutationBlock:(id)arg1 ;
-(void)_updateEntitlementEntry:(id)arg0 enabled:(BOOL)arg1 ;
-(void)_updateEntitlementEntry:(id)arg0 isUsingAdvancedScheduling:(BOOL)arg1 ;
-(void)_updateEntitlementEntry:(id)arg0 timeConfiguration:(id)arg1 ;


@end


#endif