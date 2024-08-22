// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVMODALPAGEBEZELVIEWCONTROLLER_H
#define _TVMODALPAGEBEZELVIEWCONTROLLER_H

@class UIViewController, UIColor;



@interface _TVModalPageBezelViewController : UIViewController

@property (retain, nonatomic) UIColor *bezelBackgroundColor; // ivar: _bezelBackgroundColor
@property (nonatomic) CGFloat bezelCornerRadius; // ivar: _bezelCornerRadius
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif