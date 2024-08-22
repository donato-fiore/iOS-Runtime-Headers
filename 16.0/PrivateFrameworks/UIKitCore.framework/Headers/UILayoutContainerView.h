// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UILAYOUTCONTAINERVIEW_H
#define UILAYOUTCONTAINERVIEW_H

@protocol NSCoding, UILayoutContainerViewDelegate;


#import "UIView.h"

@interface UILayoutContainerView : UIView <NSCoding>

 {
    UIView *_shadowView;
    ? _layoutContainerViewFlags;
}


@property (weak, nonatomic) NSObject<UILayoutContainerViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL usesInnerShadow; // ivar: _usesInnerShadow
@property (nonatomic) BOOL usesRoundedCorners; // ivar: _usesRoundedCorners


-(id)_systemDefaultFocusGroupIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(void)_installShadowViews;
-(void)_setFlagsFromDelegate:(id)arg0 ;
-(void)_tearDownShadowViews;
-(void)_updateShadowViews;
-(void)addSubview:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif