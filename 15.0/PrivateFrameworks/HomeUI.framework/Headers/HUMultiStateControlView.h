// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUMULTISTATECONTROLVIEW_H
#define HUMULTISTATECONTROLVIEW_H

@class UIView, NSString, NSArray, UISegmentedControl;
@protocol HUControlView, HUControlViewDelegate;



@interface HUMultiStateControlView : UIView <HUControlView>



@property (nonatomic) BOOL canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUControlViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *possibleValues; // ivar: _possibleValues
@property (readonly, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (readonly) Class superclass;
@property (retain, nonatomic) id *value;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_selectedIndexChanged:(id)arg0 ;
-(void)addPossibleValue:(id)arg0 withImage:(id)arg1 ;
-(void)addPossibleValue:(id)arg0 withTitle:(id)arg1 ;


@end


#endif