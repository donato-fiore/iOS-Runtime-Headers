// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFSHADOWVIEW_H
#define PBFSHADOWVIEW_H

@class UIView, NSString;
@protocol PBFShadowMetricsProviding;



@interface PBFShadowView : UIView <PBFShadowMetricsProviding>

 {
    UIView *_shadowView;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger shadowType; // ivar: _shadowType
@property (readonly) Class superclass;


-(struct CGAffineTransform )shadowSupplementaryTransform;
-(struct CGRect )frameWithContentWithFrame:(struct CGRect )arg0 ;
-(void)_configureForShadowType;
-(void)layoutSubviews;


@end


#endif