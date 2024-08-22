// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCNNFACELANDMARKDETECTOR_H
#define VCPCNNFACELANDMARKDETECTOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface VCPCNNFaceLandmarkDetector : NSObject {
    NSMutableArray *_landmarks;
}




+(id)detector;
-(*float)getInputBuffer;
-(id)landmarks;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withFaceBounds:(struct CGRect )arg1 ;
-(int)computeLandmarks:(*float)arg0 ;


@end


#endif