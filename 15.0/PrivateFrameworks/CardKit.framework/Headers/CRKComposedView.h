// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCOMPOSEDVIEW_H
#define CRKCOMPOSEDVIEW_H

@class UIView, NSMutableArray, NSArray, NSString;
@protocol CRKComposableView;



@interface CRKComposedView : UIView <CRKComposableView>

 {
    NSMutableArray *_mutableCardSectionSubviews;
}


@property (readonly, nonatomic) UIEdgeInsets cardSectionContentMargins;
@property (retain, nonatomic) NSArray *cardSectionSubviews; // ivar: _cardSectionSubviews
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addCardSectionSubview:(id)arg0 withKeyline:(NSInteger)arg1 ;
-(void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg0 ;


@end


#endif