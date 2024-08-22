// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKPOWERLOGTEXTVIEWCONTROLLER_H
#define FBKPOWERLOGTEXTVIEWCONTROLLER_H

@class UIViewController, NSString, UITextView;



@interface FBKPowerLogTextViewController : UIViewController

@property (copy) NSString *contents; // ivar: _contents
@property (weak) UITextView *textView; // ivar: _textView


-(void)displayText:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif