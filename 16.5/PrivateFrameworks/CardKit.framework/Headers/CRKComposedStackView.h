// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCOMPOSEDSTACKVIEW_H
#define CRKCOMPOSEDSTACKVIEW_H

@class NSMutableArray;


#import "CRKComposedView.h"

@interface CRKComposedStackView : CRKComposedView {
    NSMutableArray *_keylines;
}


@property (nonatomic) NSUInteger direction; // ivar: _direction


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )templatedContentMargins;
-(void)_updateLayout;
-(void)addCardSectionSubview:(id)arg0 withKeyline:(NSInteger)arg1 ;
-(void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg0 ;
-(void)layoutSubviews;
-(void)setCardSectionSubviews:(id)arg0 ;
-(void)triggerLayoutAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif