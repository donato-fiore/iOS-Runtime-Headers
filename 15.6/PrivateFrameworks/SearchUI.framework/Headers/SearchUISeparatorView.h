// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISEPARATORVIEW_H
#define SEARCHUISEPARATORVIEW_H

@class TLKProminenceView;



@interface SearchUISeparatorView : TLKProminenceView

@property (nonatomic) CGFloat separatorHeight; // ivar: _separatorHeight


+(NSUInteger)separatorProminenceForAppearance:(id)arg0 ;
+(id)separatorColorForAppearance:(id)arg0 ;
-(id)init;
-(struct CGSize )effectiveLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif