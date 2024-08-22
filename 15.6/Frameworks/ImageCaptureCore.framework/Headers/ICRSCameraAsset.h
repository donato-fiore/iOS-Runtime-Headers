// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICRSCAMERAASSET_H
#define ICRSCAMERAASSET_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ICRSCameraAsset : NSObject

@property (retain, nonatomic) NSMutableDictionary *icAssetDict; // ivar: _icAssetDict
@property (nonatomic) NSUInteger icAssetHandle; // ivar: _icAssetHandle
@property (copy, nonatomic) NSString *plRelatedUUID; // ivar: _plRelatedUUID
@property (readonly) NSUInteger unsignedIntegerValue;


-(BOOL)burstFavorite;
-(BOOL)burstPicked;
-(BOOL)firstPicked;
-(BOOL)hasThumbnail;
-(BOOL)highFramerate;
-(BOOL)timeLapse;
-(CGFloat)duration;
-(NSInteger)compareCameraAsset:(id)arg0 ;
-(NSUInteger)conversionGroup;
-(NSUInteger)fileSize;
-(NSUInteger)orientation;
-(NSUInteger)thumbnailSize;
-(id)assetDictionary;
-(id)burstUUID;
-(id)captureDate;
-(id)createdFilename;
-(id)filename;
-(id)groupUUID;
-(id)initWithICRSCameraAssetDictionary:(id)arg0 ;
-(id)modificationDate;
-(id)originalFilename;
-(id)originatingAssetID;
-(id)relatedUUID;
-(id)spatialOverCaptureGroupID;
-(struct CGSize )mediaDimensions;
-(struct CGSize )thumbnailDimensions;
-(void)dealloc;


@end


#endif