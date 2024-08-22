// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTIPVIEWCONTROLLER_H
#define PXTIPVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PXTipViewControllerDelegate;



@interface PXTipViewController : UIViewController

@property (weak, nonatomic) NSObject<PXTipViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly, copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (readonly, copy, nonatomic) NSString *tipIdentifier; // ivar: _tipIdentifier
@property (readonly, copy, nonatomic) NSString *titleText; // ivar: _titleText


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithTitle:(id)arg0 description:(id)arg1 systemImageNamed:(id)arg2 identifier:(id)arg3 ;
-(void)_adjustPreferedContentSizeIfNeeded;
-(void)_didTapCloseButton:(id)arg0 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;


@end


#endif