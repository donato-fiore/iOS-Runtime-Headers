// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDASHBOARDPOLICYBASEDBEHAVIORPROVIDER_H
#define SBDASHBOARDPOLICYBASEDBEHAVIORPROVIDER_H

@class CSCoverSheetViewController, NSString;
@protocol CSExternalBehaviorProviding;

#import <Foundation/Foundation.h>

#import "SBMainDisplayPolicyAggregator.h"

@interface SBDashBoardPolicyBasedBehaviorProvider : NSObject <CSExternalBehaviorProviding>

 {
    CSCoverSheetViewController *_coverSheetViewController;
    SBMainDisplayPolicyAggregator *_policyAggregator;
    id *_notificationToken;
}


@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly) Class superclass;


-(NSUInteger)_cameraRestrictions;
-(NSUInteger)_restrictedCapability:(NSUInteger)arg0 forAggregatorCapability:(NSInteger)arg1 ;
-(id)initWithCoverSheetViewController:(id)arg0 policyAggregator:(id)arg1 ;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSExternalBehaviorProviding;
-(void)dealloc;


@end


#endif