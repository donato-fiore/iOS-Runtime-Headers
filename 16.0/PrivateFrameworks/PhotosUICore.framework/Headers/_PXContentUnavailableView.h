// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXCONTENTUNAVAILABLEVIEW_H
#define _PXCONTENTUNAVAILABLEVIEW_H

@class UIContentUnavailableView, NSString, UIView;
@protocol PXReusableObject, PXUIViewBasicTile;



@interface _PXContentUnavailableView : UIContentUnavailableView <PXReusableObject, PXUIViewBasicTile>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif