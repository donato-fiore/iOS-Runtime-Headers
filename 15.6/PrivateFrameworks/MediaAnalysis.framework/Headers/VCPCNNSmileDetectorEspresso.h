// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCNNSMILEDETECTORESPRESSO_H
#define VCPCNNSMILEDETECTORESPRESSO_H



#import "VCPCNNSmileDetector.h"
#import "VCPCNNModelEspresso.h"

@interface VCPCNNSmileDetectorEspresso : VCPCNNSmileDetector {
    VCPCNNModelEspresso *_modelEspresso;
    *float _inputData;
}




+(id)sharedModel:(id)arg0 ;
-(*float)getInputBuffer;
-(id)init;
-(int)computeSmileScore:(*float)arg0 ;
-(void)dealloc;


@end


#endif