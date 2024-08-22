// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFKILLWEBCONTENTPROCESSUIACTIVITY_H
#define _SFKILLWEBCONTENTPROCESSUIACTIVITY_H

@class SFActivity;
@protocol _SFKillWebContentProcessUIActivityDelegate;



@interface _SFKillWebContentProcessUIActivity : SFActivity

@property (weak, nonatomic) NSObject<_SFKillWebContentProcessUIActivityDelegate> *webProcessDelegate; // ivar: _webProcessDelegate


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;


@end


#endif