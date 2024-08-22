// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLCACHEINDEXFILEREQUEST_H
#define QLCACHEINDEXFILEREQUEST_H

@class NSMutableArray, QLCacheFileIdentifier, QLThumbnailVersion;

#import <Foundation/Foundation.h>


@interface QLCacheIndexFileRequest : NSObject {
    *__CFArray _sizes;
    NSMutableArray *_minimumSizes;
    NSMutableArray *_badgeTypes;
    NSMutableArray *_externalGeneratorDataHashs;
    *__CFArray _lowQualities;
    BOOL _atLeastOneLowQuality;
    *__CFArray _iconModes;
    NSMutableArray *_iconVariants;
    NSMutableArray *_interpolationQualities;
}


@property (readonly) NSUInteger cacheId; // ivar: _cacheId
@property (readonly) QLCacheFileIdentifier *fileIdentifier; // ivar: _fileIdentifier
@property (readonly) QLThumbnailVersion *version; // ivar: _version


-(BOOL)allSizes;
-(BOOL)hasAtLeastOneLowQuality;
-(NSInteger)iconVariantAtIndex:(NSUInteger)arg0 ;
-(NSInteger)sizeAndIconModeCount;
-(NSUInteger)badgeTypeAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)externalGeneratorDataHashAtIndex:(NSUInteger)arg0 ;
-(float)minimumSizeAtIndex:(NSUInteger)arg0 ;
-(float)sizeAtIndex:(NSInteger)arg0 ;
-(id)initWithFileIdentifier:(id)arg0 ;
-(id)initWithFileIdentifier:(id)arg0 version:(id)arg1 ;
-(id)initWithVersionedFileIdentifier:(id)arg0 ;
-(int)interpolationQualityAtIndex:(NSUInteger)arg0 ;
-(unsigned char)iconModeAtIndex:(NSInteger)arg0 ;
-(unsigned char)lowQualityAtIndex:(NSInteger)arg0 ;
-(void)appendSize:(float)arg0 minimumSize:(float)arg1 withIconMode:(unsigned char)arg2 lowQuality:(BOOL)arg3 badgeType:(NSUInteger)arg4 iconVariant:(NSInteger)arg5 interpolationQuality:(int)arg6 externalGeneratorDataHash:(NSUInteger)arg7 ;
-(void)dealloc;


@end


#endif