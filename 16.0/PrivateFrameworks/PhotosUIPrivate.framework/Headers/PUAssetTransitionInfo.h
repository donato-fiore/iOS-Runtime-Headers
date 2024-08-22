// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSETTRANSITIONINFO_H
#define PUASSETTRANSITIONINFO_H

@class NSArray, NSString, UIImage, PXImageLayerModulator, UIView;
@protocol PUAssetTransitionInfoConfiguration, PUDisplayAsset;

#import <Foundation/Foundation.h>

#import "PUPhotoViewContentHelper.h"

@interface PUAssetTransitionInfo : NSObject <PUAssetTransitionInfoConfiguration>



@property (nonatomic) BOOL allowAutoPlay; // ivar: _allowAutoPlay
@property (retain, nonatomic) NSObject<PUDisplayAsset> *asset; // ivar: _asset
@property (copy, nonatomic) NSArray *badgeTransitionInfos; // ivar: _badgeTransitionInfos
@property (retain, nonatomic) PUPhotoViewContentHelper *contentHelper; // ivar: _contentHelper
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) PXImageLayerModulator *imageLayerModulator; // ivar: _imageLayerModulator
@property (nonatomic) ? seekTime; // ivar: _seekTime
@property (retain, nonatomic) UIView *snapshotView; // ivar: _snapshotView
@property (readonly) Class superclass;


+(id)assetTransitionInfoWithConfigurationBlock:(id)arg0 ;
-(id)init;


@end


#endif