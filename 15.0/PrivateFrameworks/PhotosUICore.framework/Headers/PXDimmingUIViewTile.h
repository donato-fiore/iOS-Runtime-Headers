// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDIMMINGUIVIEWTILE_H
#define PXDIMMINGUIVIEWTILE_H

@class UIView, NSString;
@protocol PXReusableObject, PXUIViewBasicTile;



@interface PXDimmingUIViewTile : UIView <PXReusableObject, PXUIViewBasicTile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif