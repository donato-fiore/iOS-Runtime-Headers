// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPOINTCLOUDDATA_H
#define AVPOINTCLOUDDATA_H

@class ADJasperPointCloud;

#import <Foundation/Foundation.h>


@interface AVPointCloudData : NSObject {
    *__CVBuffer _dataBuffer;
    NSInteger _projectorMode;
    ADJasperPointCloud *_jasperPointCloud;
}


@property (readonly) char * bankIdentifiers;
@property (readonly) *float confidenceScores;
@property (readonly, retain, nonatomic) ADJasperPointCloud *jasperPointCloud;
@property (readonly) *__CVBuffer pointCloudDataBuffer;
@property (readonly) unsigned int pointCloudFormatType;
@property (readonly) NSInteger pointCount;
@property ? points;
@property ? pointsAndConfidenceScores;
@property (readonly) NSInteger projectorMode;
@property (readonly) char * spotIdentifiers;


-(id)initWithDataBuffer:(struct __CVBuffer *)arg0 ;


@end


#endif