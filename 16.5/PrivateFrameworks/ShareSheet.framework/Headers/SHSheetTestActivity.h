// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETTESTACTIVITY_H
#define SHSHEETTESTACTIVITY_H

@class NSArray;


#import "UIActivity.h"

@interface SHSheetTestActivity : UIActivity

@property (copy, nonatomic) NSArray *activityItems; // ivar: _activityItems


+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif