// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLBUTTONROWVIEW_H
#define HUQUICKCONTROLBUTTONROWVIEW_H

@class UIView, NSArray, NSString, NSMutableArray, UIScrollView;
@protocol HUQuickControlAuxiliaryView;



@interface HUQuickControlButtonRowView : UIView <HUQuickControlAuxiliaryView>



@property (retain, nonatomic) NSArray *buttonConstraints; // ivar: _buttonConstraints
@property (readonly, copy, nonatomic) NSArray *buttonViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCenteredContent;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *mutableButtonViews; // ivar: _mutableButtonViews
@property (nonatomic) NSInteger preferredContentAlignment; // ivar: _preferredContentAlignment
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithButtonViews:(id)arg0 ;
-(void)_clearButtonConstraints;
-(void)_contentSizeCategoryDidChange;
-(void)_updateLayoutIfNecessary;
-(void)addButtonView:(id)arg0 ;
-(void)contentDidChange;
-(void)insertButtonView:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeButtonView:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif