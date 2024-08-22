// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVNLPVISIONREQUESTHANDLER_H
#define CVNLPVISIONREQUESTHANDLER_H

@class VNVYvzEtX1JlUdu8xx5qhDI, VN6Mb1ME89lyW3HpahkEygIG;


#import "CVNLPCaptionModelBase.h"

@interface CVNLPVisionRequestHandler : CVNLPCaptionModelBase {
    VNVYvzEtX1JlUdu8xx5qhDI *_nsfwRequest;
    VN6Mb1ME89lyW3HpahkEygIG *_significantRequest;
}




-(id)classifyImage:(struct __CVBuffer *)arg0 ;
-(id)initWithOptions:(id)arg0 runTimeParams:(id)arg1 ;


@end


#endif