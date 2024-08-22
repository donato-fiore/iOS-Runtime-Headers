// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSAUDIOBOOKCACHEITEMMETADATA_H
#define NMSAUDIOBOOKCACHEITEMMETADATA_H


#import <Foundation/Foundation.h>


@interface NMSAudiobookCacheItemMetadata : NSObject

@property (nonatomic) CGFloat cachedDuration; // ivar: _cachedDuration
@property (nonatomic) CGFloat cachedStartTime; // ivar: _cachedStartTime


+(id)metaDataForMediaItem:(id)arg0 ;
-(BOOL)_loadForMediaItem:(id)arg0 ;
-(id)_baseDirectoryForMediaItem:(id)arg0 ;


@end


#endif