// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDFETCHAPPSEGMENTSRESPONSE_H
#define AMDFETCHAPPSEGMENTSRESPONSE_H

@class NSDictionary, NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface AMDFetchAppSegmentsResponse : NSObject

@property (retain) NSDictionary *metadata; // ivar: _metadata
@property (retain) NSArray *segmentInfo; // ivar: _segmentInfo
@property (retain) NSNumber *segmentInfoType; // ivar: _segmentInfoType


-(id)getMetadata;
-(id)getSegmentInfo;
-(id)getSegmentInfoType;
-(id)initWithSegmentInfo:(id)arg0 ofType:(id)arg1 andMetaData:(id)arg2 ;


@end


#endif