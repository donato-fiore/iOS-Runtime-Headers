// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFULLSCREENTEXTVIEWCONTROLLER_H
#define HKFULLSCREENTEXTVIEWCONTROLLER_H

@class UIViewController, NSString, UITextView;



@interface HKFullScreenTextViewController : UIViewController

@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly) UITextView *textView;


-(id)description;
-(void)createTextView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif