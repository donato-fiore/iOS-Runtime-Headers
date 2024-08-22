// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSHADOWVIEW_H
#define SFSHADOWVIEW_H

@class UIImageView;



@interface SFShadowView : UIImageView {
    CGFloat _shadowRadius;
    BOOL _needsUpdateImage;
}


@property (nonatomic) NSInteger style; // ivar: _style


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )frameWithContentWithFrame:(struct CGRect )arg0 ;
-(void)_updateImageIfNeeded;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif