// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSPAGINGCONTROLVIEW_H
#define CPSPAGINGCONTROLVIEW_H

@class UIView, NSString, UIButton, NSNumberFormatter, UILabel;
@protocol CPSLinearFocusProviding, CPSPageControlling;



@interface CPSPagingControlView : UIView <CPSLinearFocusProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIButton *nextButton; // ivar: _nextButton
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (nonatomic) NSUInteger pageCount; // ivar: _pageCount
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (weak, nonatomic) NSObject<CPSPageControlling> *pagingDelegate; // ivar: _pagingDelegate
@property (retain, nonatomic) UILabel *positionLabel; // ivar: _positionLabel
@property (retain, nonatomic) UIButton *previousButton; // ivar: _previousButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;


-(id)_linearFocusItems;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleNextButton:(id)arg0 ;
-(void)_handlePreviousButton:(id)arg0 ;
-(void)_invokeDelegateForPageIndex:(NSUInteger)arg0 ;
-(void)_update;
-(void)_updateImages;
-(void)enablePageControlsIfNecessary;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif