// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSINLINECARDCONTAINERVIEW_H
#define CPSINLINECARDCONTAINERVIEW_H

@class UIView, UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, CPSInlineCardViewDelegate;



@interface CPSInlineCardContainerView : UIView <UIGestureRecognizerDelegate>

 {
    UITapGestureRecognizer *_tapRecognizer;
}


@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSInlineCardViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)tappedView:(id)arg0 ;


@end


#endif