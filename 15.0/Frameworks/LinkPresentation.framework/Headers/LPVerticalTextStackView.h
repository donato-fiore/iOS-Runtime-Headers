// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPVERTICALTEXTSTACKVIEW_H
#define LPVERTICALTEXTSTACKVIEW_H

@class NSMutableArray;
@protocol LPContentInsettable;


#import "LPComponentView.h"
#import "LPVerticalTextStackViewStyle.h"

@interface LPVerticalTextStackView : LPComponentView <LPContentInsettable>

 {
    NSMutableArray *_items;
    BOOL _hasEverBuilt;
    UIEdgeInsets _contentInset;
    LPVerticalTextStackViewStyle *_style;
}




-(NSInteger)computedNumberOfLines;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 style:(id)arg1 ;
-(struct CGSize )_layoutTextStackForSize:(struct CGSize )arg0 applyingLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addArrangedSubview:(id)arg0 ;
-(void)layoutComponentView;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif