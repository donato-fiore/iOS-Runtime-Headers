// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETSEGMENTTRACKREPORT_H
#define AVASSETSEGMENTTRACKREPORT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVAssetSegmentReportSampleInformation.h"

@interface AVAssetSegmentTrackReport : NSObject

@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic) ? earliestPresentationTimeStamp; // ivar: _earliestPresentationTimeStamp
@property (readonly, nonatomic) AVAssetSegmentReportSampleInformation *firstVideoSampleInformation; // ivar: _firstVideoSampleInformation
@property (readonly, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (readonly, nonatomic) int trackID; // ivar: _trackID


-(id)initWithFigSegmentTrackReportDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif