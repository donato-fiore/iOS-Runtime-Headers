// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAUDIOINPUTVIEWCONTROLLER_H
#define WFAUDIOINPUTVIEWCONTROLLER_H

@class UIViewController, UIView, UILabel;



@interface WFAudioInputViewController : UIViewController

@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UILabel *statusLabel; // ivar: _statusLabel


-(BOOL)accessibilityPerformMagicTap;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleTap;
-(void)loadView;


@end


#endif