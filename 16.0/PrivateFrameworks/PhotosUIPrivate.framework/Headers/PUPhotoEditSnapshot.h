// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITSNAPSHOT_H
#define PUPHOTOEDITSNAPSHOT_H

@class PHAdjustmentData, NSData, AVURLAsset;

#import <Foundation/Foundation.h>


@interface PUPhotoEditSnapshot : NSObject

@property (retain, nonatomic, setter=_setAdjustmentData:) PHAdjustmentData *adjustmentData; // ivar: _adjustmentData
@property (retain, nonatomic, setter=_setBaseImageData:) NSData *baseImageData; // ivar: _baseImageData
@property (retain, nonatomic, setter=_setBaseVideoComplement:) AVURLAsset *baseVideoComplement; // ivar: _baseVideoComplement
@property (retain, nonatomic, setter=_setImageData:) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic, setter=_setVideoComplement:) AVURLAsset *videoComplement; // ivar: _videoComplement
@property (nonatomic, setter=_setWorkImageVersion:) NSInteger workImageVersion; // ivar: _workImageVersion


+(void)captureSnapshotForAsset:(id)arg0 mediaProvider:(id)arg1 completion:(id)arg2 ;
-(id)_copyAsset:(id)arg0 ;
-(id)_copyData:(id)arg0 ;
-(id)_copyDataAtURL:(id)arg0 ;
-(id)init;
-(void)_copySourceData:(id)arg0 destinationData:(*id)arg1 destinationURL:(*id)arg2 ;


@end


#endif