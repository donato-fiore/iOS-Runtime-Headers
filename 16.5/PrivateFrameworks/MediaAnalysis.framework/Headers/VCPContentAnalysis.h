// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCONTENTANALYSIS_H
#define VCPCONTENTANALYSIS_H


#import <Foundation/Foundation.h>

#import "VCPCNNModel.h"
#import "VCPCNNData.h"

@interface VCPContentAnalysis : NSObject {
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSUInteger _previousContentType;
    *__CVBuffer _argbPixelBuffer;
    *OpaqueVTPixelTransferSession _argbTransferSession;
}




+(id)contentAnalysis;
-(id)init;
-(int)blockContentDetection:(*NSUInteger)arg0 ;
-(int)detectPixelBuffer:(struct __CVBuffer *)arg0 contentType:(*NSUInteger)arg1 ;
-(void)copyBlock:(char *)arg0 withStride:(NSUInteger)arg1 toBlock:(*float)arg2 ;
-(void)dealloc;


@end


#endif