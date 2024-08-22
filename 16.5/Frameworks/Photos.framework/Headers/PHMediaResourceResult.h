// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMEDIARESOURCERESULT_H
#define PHMEDIARESOURCERESULT_H

@class NSData, NSURL;


#import "PHCompositeMediaResult.h"
#import "PHAssetResource.h"

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}


@property (retain, nonatomic) NSData *assetResourceData; // ivar: _assetResourceData
@property (copy, nonatomic) NSURL *assetResourceFileURL; // ivar: _assetResourceFileURL


-(BOOL)containsValidData;
-(id)adjustmentData;
-(id)allowedInfoKeys;
-(id)exifOrientation;
-(id)imageURL;
-(id)initWithRequestID:(int)arg0 assetResource:(id)arg1 ;
-(id)mediaMetadata;
-(id)sanitizedInfoDictionary;
-(id)uniformTypeIdentifier;
-(id)videoURL;


@end


#endif