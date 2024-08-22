// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFACTIVITY_H
#define _SFACTIVITY_H

@class UIActivity;
@protocol _SFActivityDelegate;



@interface _SFActivity : UIActivity

@property (weak, nonatomic) NSObject<_SFActivityDelegate> *delegate; // ivar: _delegate


-(void)activityDidFinish:(BOOL)arg0 ;


@end


#endif