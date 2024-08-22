// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMIMAGEVIEWMODEL_H
#define PXCMMIMAGEVIEWMODEL_H

@protocol PXDisplayAsset, PXUIImageProvider;


#import "PXObservable.h"

@interface PXCMMImageViewModel : PXObservable

@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *mediaProvider; // ivar: _mediaProvider


-(void)performChanges:(id)arg0 ;


@end


#endif