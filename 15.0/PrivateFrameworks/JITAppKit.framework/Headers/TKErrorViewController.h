// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKERRORVIEWCONTROLLER_H
#define TKERRORVIEWCONTROLLER_H

@class UIViewController, UILabel, NSString;



@interface TKErrorViewController : UIViewController {
    UILabel *_label;
}


@property (copy, nonatomic) NSString *message; // ivar: _message


+(id)viewControllerForMessage:(id)arg0 ;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif