// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFPDCFDATABUFFER_H
#define CFPDCFDATABUFFER_H



#import "CFPDDataBuffer.h"

@interface CFPDCFDataBuffer : CFPDDataBuffer {
    *__CFData data;
}




-(*void)bytes;
-(NSUInteger)length;
-(id)copyXPCData;
-(id)initWithCFData:(struct __CFData *)arg0 ;
-(struct __CFData *)copyCFData;
-(void)dealloc;


@end


#endif