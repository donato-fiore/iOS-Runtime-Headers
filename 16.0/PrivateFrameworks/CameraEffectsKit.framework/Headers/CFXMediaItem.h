// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFXMEDIAITEM_H
#define CFXMEDIAITEM_H

@class NSURL, NSData;

#import <Foundation/Foundation.h>

#import "CFXClip.h"

@interface CFXMediaItem : NSObject

@property (copy, nonatomic) NSURL *adjustedAssetURL; // ivar: _adjustedAssetURL
@property (copy, nonatomic) NSData *adjustmentsData;
@property (nonatomic) BOOL adjustmentsDataWasSet; // ivar: _adjustmentsDataWasSet
@property (readonly, nonatomic) NSInteger cameraMode; // ivar: _cameraMode
@property (readonly, nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (readonly, nonatomic) CFXClip *clip; // ivar: _clip
@property (nonatomic) BOOL initializedWithoutSettingAllProperties; // ivar: _initializedWithoutSettingAllProperties
@property (readonly, nonatomic) NSURL *metadataURL; // ivar: _metadataURL
@property (copy, nonatomic) NSURL *originalAssetURL; // ivar: _originalAssetURL
@property (nonatomic) NSInteger type; // ivar: _type


-(id)init;
-(id)initWithType:(NSInteger)arg0 originalAssetURL:(id)arg1 adjustmentsData:(id)arg2 ;
-(void)CFX_updateCameraPositionForPhotoType;
-(void)createClipForMediaType:(NSInteger)arg0 assetURL:(id)arg1 cameraMode:(NSInteger)arg2 effectStack:(id)arg3 ;


@end


#endif