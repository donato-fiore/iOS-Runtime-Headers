// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOGYROSTABILIZER_H
#define VCPVIDEOGYROSTABILIZER_H

@class NSMutableDictionary, NSArray;


#import "VCPVideoStabilizer.h"

@interface VCPVideoGyroStabilizer : VCPVideoStabilizer {
    NSMutableDictionary *_analysisDict;
    NSArray *_metadata;
    CGSize _cropSize;
}




-(id)initWithMetadata:(id)arg0 sourceSize:(struct CGSize )arg1 cropRect:(struct CGRect )arg2 ;
-(int)convertAnalysisResult;
-(void)storeAnalytics:(struct CGAffineTransform )arg0 isLivePhoto:(BOOL)arg1 ;


@end


#endif