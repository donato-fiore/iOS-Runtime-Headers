// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYLABEL_H
#define PXCURATEDLIBRARYLABEL_H

@class UILabel;
@protocol PXGReusableView;


#import "PXCuratedLibraryLabelConfiguration.h"

@interface PXCuratedLibraryLabel : UILabel <PXGReusableView>



@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXCuratedLibraryLabelConfiguration *userData; // ivar: _userData


+(struct CGSize )sizeThatFits:(struct CGSize )arg0 withConfiguration:(id)arg1 ;
-(void)becomeReusable;
-(void)prepareForReuse;


@end


#endif