// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUILOCKSCREENFOOTERVIEW_H
#define SPUILOCKSCREENFOOTERVIEW_H

@class NUIContainerBoxView, TLKTextButton;



@interface SPUILockScreenFooterView : NUIContainerBoxView

@property (retain) TLKTextButton *unlockScreenButton; // ivar: _unlockScreenButton


-(id)init;
-(void)unlockButtonPressed:(id)arg0 ;
-(void)updateTitle;


@end


#endif