// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPFLOWFEATUREEXTRACTOR_H
#define VCPFLOWFEATUREEXTRACTOR_H

@class NSString, NSArray;


#import "VCPEspressoModel.h"

@interface VCPFlowFeatureExtractor : VCPEspressoModel {
    int _numLevels;
    NSString *_inputBlobName;
    NSArray *_featureBlobNames;
    NSArray *_featureChannels;
}




-(id)initModule:(int)arg0 config:(id)arg1 cancel:(id)arg2 ;
-(int)bindWithBuffers:(struct __CVBuffer *)arg0 imgFeature:(struct ? *)arg1 ;
-(int)extractFeatureFromImage:(struct __CVBuffer *)arg0 toFeature:(struct ? *)arg1 callback:(id)arg2 ;
-(int)setFeatureShape:(struct ? *)arg0 height:(int)arg1 width:(int)arg2 level:(int)arg3 ;


@end


#endif