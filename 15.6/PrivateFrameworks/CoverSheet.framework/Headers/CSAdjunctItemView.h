// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSADJUNCTITEMVIEW_H
#define CSADJUNCTITEMVIEW_H

@class UIView, NSString, PLPlatterView;
@protocol BSDescriptionProviding, MTMaterialGrouping, CSAdjunctItemHosting;



@interface CSAdjunctItemView : UIView <BSDescriptionProviding, MTMaterialGrouping>

 {
    NSInteger _recipe;
    BOOL _isContentHostPlatterView;
}


@property (weak, nonatomic) NSObject<CSAdjunctItemHosting> *contentHost; // ivar: _contentHost
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (readonly, weak, nonatomic) PLPlatterView *platterView; // ivar: _platterView
@property (nonatomic) CGSize sizeToMimic; // ivar: _sizeToMimic
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithRecipe:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateSizeToMimic;
-(void)layoutSubviews;


@end


#endif