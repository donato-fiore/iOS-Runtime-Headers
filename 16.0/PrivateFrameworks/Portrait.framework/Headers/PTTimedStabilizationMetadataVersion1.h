// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTTIMEDSTABILIZATIONMETADATAVERSION1_H
#define PTTIMEDSTABILIZATIONMETADATAVERSION1_H



#import "PTTimedStabilizationMetadata.h"

@interface PTTimedStabilizationMetadataVersion1 : PTTimedStabilizationMetadata {
    ? _stabilizationHomography;
    ? _estimatedMotionBlur;
}


@property ? estimatedMotionBlur;
@property (readonly) BOOL hasEstimatedMotionBlur; // ivar: _hasEstimatedMotionBlur
@property (readonly) BOOL hasStabilizationHomography; // ivar: _hasStabilizationHomography
@property (nonatomic) ? stabilizationHomography;


-(BOOL)writeToData:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithData:(id)arg0 minorVersion:(unsigned int)arg1 ;
-(id)initWithMinorVersion:(unsigned int)arg0 ;
-(unsigned int)sizeOfSerializedObjectWithOptions:(id)arg0 ;


@end


#endif