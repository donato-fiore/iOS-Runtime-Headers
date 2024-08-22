// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEQUESTIONAUTONAMINGGADGET_H
#define PXPEOPLEQUESTIONAUTONAMINGGADGET_H

@class UIViewController, NSString, UIButton, PHPerson, UILabel;
@protocol PXGadget, PXGadgetDelegate;


#import "PXGadgetSpec.h"
#import "PXPeopleScalableAvatarView.h"

@interface PXPeopleQuestionAutoNamingGadget : UIViewController <PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType; // ivar: _gadgetType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (retain, nonatomic) PXPeopleScalableAvatarView *keyFaceView; // ivar: _keyFaceView
@property (readonly, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) UIButton *noButton; // ivar: _noButton
@property (retain, nonatomic) PHPerson *person; // ivar: _person
@property (copy, nonatomic) NSString *possibleName; // ivar: _possibleName
@property (nonatomic) NSInteger priority;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIButton *undoButton; // ivar: _undoButton
@property (nonatomic) CGRect visibleContentRect;
@property (retain, nonatomic) UIButton *yesButton; // ivar: _yesButton


-(id)contentViewController;
-(id)initWithPerson:(id)arg0 possibleName:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)noButtonTapped:(id)arg0 ;
-(void)undoButtonTapped:(id)arg0 ;
-(void)viewDidLoad;
-(void)yesButtonTapped:(id)arg0 ;


@end


#endif