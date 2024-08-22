// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLEQUESTIONMERGEGADGET_H
#define PXPEOPLEQUESTIONMERGEGADGET_H

@class UIViewController, NSString, PHPerson, UIButton, UILabel;
@protocol PXGadget, PXGadgetDelegate;


#import "PXGadgetSpec.h"
#import "PXPeopleScalableAvatarView.h"

@interface PXPeopleQuestionMergeGadget : UIViewController <PXGadget>



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
@property (retain, nonatomic) PHPerson *person; // ivar: _person
@property (nonatomic) NSInteger priority;
@property (retain, nonatomic) UIButton *reviewButton; // ivar: _reviewButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) CGRect visibleContentRect;


-(id)contentViewController;
-(id)initWithPerson:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)reviewButtonTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif