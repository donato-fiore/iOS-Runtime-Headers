// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDICACTIONACTIVITY_H
#define _UIDICACTIONACTIVITY_H

@class NSString;


#import "UIActivity.h"

@interface _UIDICActionActivity : UIActivity {
    NSString *_actionActivityType;
    NSString *_activityImageName;
    NSString *_localizedTitle;
}


@property (copy, nonatomic) id *activityFinishedPerformingHandler; // ivar: _activityFinishedPerformingHandler
@property (copy, nonatomic) id *activityPerformingHandler; // ivar: _activityPerformingHandler


+(NSInteger)activityCategory;
+(id)newLegacyDelegationActionActivityForCopy;
+(id)newLegacyDelegationActionActivityForPrint;
+(id)newLegacyDelegationActionActivityForSaveToCameraRoll;
+(id)newPreviewActionActivity;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)description;
-(id)initWithActivityType:(id)arg0 activityImageName:(id)arg1 localizedTitle:(id)arg2 ;
-(void)_cleanup;
-(void)performActivity;


@end


#endif