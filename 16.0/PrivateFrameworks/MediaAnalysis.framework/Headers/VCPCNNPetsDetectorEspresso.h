// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPCNNPETSDETECTORESPRESSO_H
#define VCPCNNPETSDETECTORESPRESSO_H

@class NSString;


#import "VCPCNNPetsDetector.h"
#import "VCPCNNModelEspresso.h"

@interface VCPCNNPetsDetectorEspresso : VCPCNNPetsDetector {
    int _maxNumRegions;
    VCPCNNModelEspresso *_modelEspresso;
    *float _inputData;
    NSString *_resConfig;
    int _srcWidth;
    int _srcHeight;
}




+(id)sharedModel:(id)arg0 ;
-(*float)getInputBuffer:(int)arg0 srcWidth:(int)arg1 cnnInputHeight:(*int)arg2 cnnInputWidth:(*int)arg3 ;
-(id)initWithMaxNumRegions:(int)arg0 ;
-(int)createModel:(int)arg0 srcWidth:(int)arg1 ;
-(int)generatePetsBoxes:(id)arg0 faceBoxes:(id)arg1 cancel:(id)arg2 ;
-(void)dealloc;


@end


#endif