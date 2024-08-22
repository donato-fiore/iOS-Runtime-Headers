// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IRISVIDEOMETADATAEXTRACTOR_H
#define IRISVIDEOMETADATAEXTRACTOR_H

@class NSDictionary, NSMutableArray, NSArray, AVAsset, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IrisVideoMetadataExtractor : NSObject

@property (readonly) NSDictionary *allMetadata; // ivar: allMetadata
@property (retain) NSMutableArray *desiredIrisKeysArray; // ivar: desiredIrisKeysArray
@property (readonly) NSArray *framesMetadataArray; // ivar: _framesMetadataArray
@property (retain) AVAsset *inMovieAsset; // ivar: inMovieAsset
@property BOOL processedFile; // ivar: processedFile
@property BOOL saveAllMetadata; // ivar: saveAllMetadata
@property (readonly) NSMutableDictionary *videoTrackMetadataDict; // ivar: videoTrackMetadataDict


-(id)init;
-(int)AddInfoFromMetadata:(id)arg0 withTimeStamp:(struct ? )arg1 toArray:(id)arg2 ;
-(int)processFile;
-(int)processStillFrameTimeForAsset:(id)arg0 toDictionary:(id)arg1 ;
-(int)processVideoTrack:(id)arg0 ;
-(void)AddFrameDictionary:(id)arg0 withCMTime:(struct ? )arg1 toArray:(id)arg2 ;


@end


#endif