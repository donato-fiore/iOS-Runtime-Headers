// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLLOCKACTIVITY_H
#define QLLOCKACTIVITY_H

@class UIActivity;
@protocol QLLockActivityDelegate;



@interface QLLockActivity : UIActivity

@property (weak) NSObject<QLLockActivityDelegate> *delegate; // ivar: _delegate


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;


@end


#endif