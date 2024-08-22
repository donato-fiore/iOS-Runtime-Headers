// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBASYMMETRICALCORNERRADIUSWRAPPERVIEW_H
#define SBASYMMETRICALCORNERRADIUSWRAPPERVIEW_H

@class NSArray, BSCornerRadiusConfiguration;


#import "SBHitTestExtendedView.h"

@interface SBAsymmetricalCornerRadiusWrapperView : SBHitTestExtendedView {
    SBHitTestExtendedView *_trailingCornersMaskingView;
}


@property (readonly, copy, nonatomic) NSArray *contentViews;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration; // ivar: _cornerRadiusConfiguration
@property (nonatomic) NSUInteger maskedCorners; // ivar: _maskedCorners


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateCornerRadius;
-(void)_updateMaskedCorners;
-(void)addContentView:(id)arg0 ;
-(void)bringContentViewToFront:(id)arg0 ;
-(void)sendContentViewToBack:(id)arg0 ;
-(void)setClipsToBounds:(BOOL)arg0 ;


@end


#endif