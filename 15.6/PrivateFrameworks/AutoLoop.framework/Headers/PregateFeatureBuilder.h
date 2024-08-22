// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PREGATEFEATUREBUILDER_H
#define PREGATEFEATUREBUILDER_H

@class NSArray, NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>

#import "ExifMetadataExtractor.h"
#import "IrisVideoMetadataExtractor.h"

@interface PregateFeatureBuilder : NSObject {
    ? _frameTimes;
    ? _frameOffsets;
    ? _frameBlurVectors;
}


@property (retain) NSArray *facesArray; // ivar: _facesArray
@property (readonly) NSMutableDictionary *featuresDict; // ivar: featuresDict
@property ? frameBlurVectors;
@property ? frameOffsets;
@property ? frameTimes;
@property (readonly) NSMutableDictionary *fullFeaturesDict; // ivar: fullFeaturesDict
@property (retain) ExifMetadataExtractor *irisStillExtractor; // ivar: irisStillExtractor
@property (retain) IrisVideoMetadataExtractor *irisVideoExtractor; // ivar: irisVideoExtractor
@property (retain) NSArray *movieMetadata; // ivar: _movieMetadata
@property (retain) NSArray *stdProcessInputKeysArray; // ivar: stdProcessInputKeysArray
@property (retain) NSDictionary *stillImageMetadata; // ivar: _stillImageMetadata
@property (retain) NSDictionary *videoTrackMetadataDict; // ivar: _videoTrackMetadataDict


-(int)fillVector:(*void)arg0 withPerFrameStats:(id)arg1 ;
-(int)processFullDictionary:(BOOL)arg0 ;
-(int)standardProcessKey:(id)arg0 addToDictionary:(id)arg1 ;


@end


#endif