// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCAMERAPREVIEWWELLASSETCHANGE_H
#define PLCAMERAPREVIEWWELLASSETCHANGE_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface PLCameraPreviewWellAssetChange : NSObject

@property (copy, nonatomic) NSDate *addedDate; // ivar: _addedDate
@property (nonatomic, getter=isAllowed) BOOL allowed; // ivar: _allowed
@property (copy, nonatomic) NSString *assetUUID; // ivar: _assetUUID
@property (nonatomic) NSUInteger effectiveThumbnailIndex; // ivar: _effectiveThumbnailIndex
@property (nonatomic) BOOL shouldRefreshPreviewWellWithFetchRequest; // ivar: _shouldRefreshPreviewWellWithFetchRequest
@property (nonatomic) CGFloat sortToken; // ivar: _sortToken
@property (copy, nonatomic) NSString *thumbnailIdentifier; // ivar: _thumbnailIdentifier


+(id)cameraPreviewWellAssetChangeToForceRefetch;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareToDate:(id)arg0 sortToken:(CGFloat)arg1 ;
-(id)initWithManagedAsset:(id)arg0 ;


@end


#endif