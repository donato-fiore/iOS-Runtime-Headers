// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCNNSMILEDETECTORMPS_H
#define VCPCNNSMILEDETECTORMPS_H



#import "VCPCNNSmileDetector.h"
#import "VCPCNNModel.h"
#import "VCPCNNData.h"

@interface VCPCNNSmileDetectorMPS : VCPCNNSmileDetector {
    VCPCNNModel *_model;
    VCPCNNData *_input;
}




-(*float)getInputBuffer;
-(id)init;
-(int)computeSmileScore:(*float)arg0 ;


@end


#endif