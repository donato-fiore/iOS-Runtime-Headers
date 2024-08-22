// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FILTEREDMETADATAEXTRACTOR_H
#define FILTEREDMETADATAEXTRACTOR_H

@class NSMutableArray;


#import "IrisVideoMetadataExtractor.h"

@interface FilteredMetadataExtractor : IrisVideoMetadataExtractor

@property (retain) NSMutableArray *filteredKeysArray; // ivar: filteredKeysArray


-(id)init;
-(int)processFile;
-(void)removeMetadataFromInterpolatedFrameDict:(id)arg0 ;


@end


#endif