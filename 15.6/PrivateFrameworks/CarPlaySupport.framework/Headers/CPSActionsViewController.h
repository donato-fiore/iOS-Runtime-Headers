// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSACTIONSVIEWCONTROLLER_H
#define CPSACTIONSVIEWCONTROLLER_H

@class UIViewController, NSString, UIFocusGuide, NSArray, UIStackView;
@protocol CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSEntityUpdateSupporting, CPEntityActionsProviding, CPSEntityContentViewControllerDelegate;



@interface CPSActionsViewController : UIViewController <CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSEntityUpdateSupporting>

 {
    ? _layoutflags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<CPEntityActionsProviding> *entity; // ivar: _entity
@property (weak, nonatomic) NSObject<CPSEntityContentViewControllerDelegate> *eventDelegate; // ivar: _eventDelegate
@property (retain, nonatomic) UIFocusGuide *focusGuide; // ivar: _focusGuide
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (weak, nonatomic) NSObject<CPSActionButtonLayoutDelegate> *layoutDelegate; // ivar: _layoutDelegate
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


-(CGFloat)buttonRadius;
-(id)initWithEntity:(id)arg0 layoutDelete:(id)arg1 ;
-(struct CGSize )buttonGlyphSize;
-(struct CGSize )buttonSize;
-(void)didSelectButton:(id)arg0 ;
-(void)setupLayoutConstraints;
-(void)setupViews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)updateViews;
-(void)updateWithEntity:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif