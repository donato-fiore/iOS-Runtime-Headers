// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMADDTOFAVORTIESACTIVITY_H
#define PMADDTOFAVORTIESACTIVITY_H

@class UIActivity;
@protocol PMAddToFavortiesActivityDelegate;



@interface PMAddToFavortiesActivity : UIActivity

@property (weak, nonatomic) NSObject<PMAddToFavortiesActivityDelegate> *delegate; // ivar: _delegate


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;


@end


#endif