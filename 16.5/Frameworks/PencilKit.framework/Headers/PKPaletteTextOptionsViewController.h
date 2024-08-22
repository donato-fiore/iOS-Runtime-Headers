// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTETEXTOPTIONSVIEWCONTROLLER_H
#define PKPALETTETEXTOPTIONSVIEWCONTROLLER_H

@class UIViewController;
@protocol PKPaletteTextOptionsViewControllerDelegate;



@interface PKPaletteTextOptionsViewController : UIViewController

@property (weak, nonatomic) NSObject<PKPaletteTextOptionsViewControllerDelegate> *delegate; // ivar: _delegate


-(struct CGSize )preferredContentSize;
-(void)_signatureButtonTouchUpInsideHandler:(id)arg0 ;
-(void)_textButtonTouchUpInsideHandler:(id)arg0 ;
-(void)loadView;


@end


#endif