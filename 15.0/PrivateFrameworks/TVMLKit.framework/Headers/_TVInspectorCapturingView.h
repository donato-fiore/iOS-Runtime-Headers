// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVINSPECTORCAPTURINGVIEW_H
#define _TVINSPECTORCAPTURINGVIEW_H

@class UIView, UILabel;
@protocol _TVInspectorCapturingViewDelegate;



@interface _TVInspectorCapturingView : UIView

@property (weak, nonatomic) NSObject<_TVInspectorCapturingViewDelegate> *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (readonly, nonatomic, getter=isTestingHits) BOOL testingHits; // ivar: _testingHits


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapView:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif