// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPMADSERVICEIMAGEASSET_H
#define VCPMADSERVICEIMAGEASSET_H

@class NSArray, NSData, NSString, CLLocation;

#import <Foundation/Foundation.h>


@interface VCPMADServiceImageAsset : NSObject

@property (copy, nonatomic) NSArray *barcodeObservations; // ivar: _barcodeObservations
@property (copy, nonatomic) NSData *cachedParseData; // ivar: _cachedParseData
@property (readonly, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (readonly, nonatomic) NSString *clientTeamID; // ivar: _clientTeamID
@property (copy, nonatomic) NSArray *documentObservations; // ivar: _documentObservations
@property (readonly, nonatomic) NSArray *faces;
@property (readonly, nonatomic) BOOL hasCachedParseData; // ivar: _hasCachedParseData
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSArray *nsfwClassifications;
@property (retain, nonatomic) NSString *signpostPayload; // ivar: _signpostPayload


+(id)assetWithPhotosAsset:(id)arg0 clientBundleID:(id)arg1 clientTeamID:(id)arg2 ;
+(id)assetWithPhotosAsset:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4 ;
+(id)assetWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 identifier:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4 ;
+(id)assetWithURL:(id)arg0 identifier:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3 ;
-(?)loadPixelBufferorientation;
-(id)initWithClientBundleID:(id)arg0 andClientTeamID:(id)arg1 ;
-(id)vcp_annotation:(BOOL)arg0 ;
-(id)vcp_textAnnotation;


@end


#endif