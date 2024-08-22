// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLCACHETHUMBNAILDATA_H
#define QLCACHETHUMBNAILDATA_H

@class NSData, QLTBitmapFormat, QLCacheFileIdentifier, NSDate, QLThumbnailVersion;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "QLCacheBlobInfo.h"

@interface QLCacheThumbnailData : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _state;
}


@property (readonly, nonatomic) NSUInteger badgeType; // ivar: _badgeType
@property (readonly, nonatomic) NSData *bitmapData; // ivar: _bitmapData
@property (retain, nonatomic) QLCacheBlobInfo *bitmapDataToValidate; // ivar: _bitmapDataToValidate
@property (readonly, nonatomic) QLTBitmapFormat *bitmapFormat; // ivar: _bitmapFormat
@property (readonly, nonatomic) NSUInteger cacheId; // ivar: _cacheId
@property (readonly, nonatomic) CGRect contentRect; // ivar: _contentRect
@property (readonly, nonatomic) NSUInteger externalGeneratorDataHash; // ivar: _externalGeneratorDataHash
@property (readonly, nonatomic) QLCacheFileIdentifier *fileIdentifier; // ivar: _fileIdentifier
@property (readonly, nonatomic) int flavor; // ivar: _flavor
@property (readonly, nonatomic) BOOL hasData;
@property (readonly, nonatomic) NSUInteger hitCount; // ivar: _hitCount
@property (readonly, nonatomic) BOOL iconMode; // ivar: _iconMode
@property (readonly, nonatomic) NSInteger iconVariant; // ivar: _iconVariant
@property (readonly, nonatomic) int interpolationQuality; // ivar: _interpolationQuality
@property (readonly, copy, nonatomic) NSDate *lastHitDate; // ivar: _lastHitDate
@property (readonly, nonatomic) NSData *metadata; // ivar: _metadata
@property (retain, nonatomic) QLCacheBlobInfo *metadataToValidate; // ivar: _metadataToValidate
@property (readonly, nonatomic) float size; // ivar: _size
@property (readonly, nonatomic) NSUInteger totalBufferSize; // ivar: _totalBufferSize
@property (readonly, nonatomic) QLThumbnailVersion *version; // ivar: _version


-(BOOL)setState:(NSUInteger)arg0 ;
-(BOOL)setState:(NSUInteger)arg0 changedState:(*BOOL)arg1 ;
-(NSUInteger)state;
-(id)initWithCacheId:(NSUInteger)arg0 fileIdentifier:(id)arg1 version:(id)arg2 size:(float)arg3 iconMode:(BOOL)arg4 iconVariant:(NSInteger)arg5 interpolationQuality:(int)arg6 badgeType:(NSUInteger)arg7 externalGeneratorDataHash:(NSUInteger)arg8 hitCount:(NSUInteger)arg9 lastHitDate:(id)arg10 ;
-(id)initWithCacheId:(NSUInteger)arg0 fileIdentifier:(id)arg1 version:(id)arg2 size:(float)arg3 iconMode:(BOOL)arg4 iconVariant:(NSInteger)arg5 interpolationQuality:(int)arg6 hitCount:(NSUInteger)arg7 lastHitDate:(id)arg8 bitmapFormat:(id)arg9 bitmapData:(id)arg10 metadata:(id)arg11 flavor:(int)arg12 contentRect:(struct CGRect )arg13 badgeType:(NSUInteger)arg14 externalGeneratorDataHash:(NSUInteger)arg15 ;
-(id)initWithCacheId:(NSUInteger)arg0 thumbnailRequest:(id)arg1 size:(float)arg2 badgeType:(NSUInteger)arg3 ;
-(id)initWithCacheId:(NSUInteger)arg0 thumbnailRequest:(id)arg1 size:(float)arg2 bitmapFormat:(id)arg3 bitmapData:(id)arg4 metadata:(id)arg5 flavor:(int)arg6 contentRect:(struct CGRect )arg7 badgeType:(NSUInteger)arg8 ;
-(id)initWithUnsavedDataForThumbnailRequest:(id)arg0 size:(float)arg1 bitmapFormat:(id)arg2 bitmapData:(id)arg3 reservationInfo:(id)arg4 metadata:(id)arg5 reservationInfo:(id)arg6 flavor:(int)arg7 contentRect:(struct CGRect )arg8 badgeType:(NSUInteger)arg9 ;
-(void)dealloc;


@end


#endif