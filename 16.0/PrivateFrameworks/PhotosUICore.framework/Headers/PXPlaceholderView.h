// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPLACEHOLDERVIEW_H
#define PXPLACEHOLDERVIEW_H

@class UIView, UIActivityIndicatorView, NSString;
@protocol PXReusableObject, PXUIViewBasicTile;



@interface PXPlaceholderView : UIView <PXReusableObject, PXUIViewBasicTile>

 {
    UIActivityIndicatorView *_indicator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldShowIndicatorView; // ivar: _shouldShowIndicatorView
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif