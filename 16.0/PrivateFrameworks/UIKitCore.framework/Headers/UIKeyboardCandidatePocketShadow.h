// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDCANDIDATEPOCKETSHADOW_H
#define UIKEYBOARDCANDIDATEPOCKETSHADOW_H



#import "UICollectionReusableView.h"

@interface UIKeyboardCandidatePocketShadow : UICollectionReusableView

@property (nonatomic) BOOL drawsShadow; // ivar: _drawsShadow
@property (nonatomic) BOOL shadowFadesToBottom; // ivar: _shadowFadesToBottom
@property (nonatomic) BOOL showsInDarkBackground; // ivar: _showsInDarkBackground


+(CGFloat)widthWithShadow:(BOOL)arg0 ;
+(id)leftShadowImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif