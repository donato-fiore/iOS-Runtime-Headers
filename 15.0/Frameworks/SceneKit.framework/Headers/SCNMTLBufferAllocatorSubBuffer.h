// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNMTLBUFFERALLOCATORSUBBUFFER_H
#define SCNMTLBUFFERALLOCATORSUBBUFFER_H



#import "SCNMTLBuffer.h"
#import "SCNFixedSizePage.h"

@interface SCNMTLBufferAllocatorSubBuffer : SCNMTLBuffer {
    SCNFixedSizePage *_parentPage;
}




-(id)initWithPage:(id)arg0 ;
-(void)dealloc;


@end


#endif