// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFPDPURGEABLEBUFFER_H
#define CFPDPURGEABLEBUFFER_H



#import "CFPDDataBuffer.h"

@interface CFPDPurgeableBuffer : CFPDDataBuffer {
    *__CFData handle;
    NSUInteger allocSize;
    BOOL safe;
    BOOL usedMalloc;
}




-(*void)bytes;
-(BOOL)beginAccessing;
-(BOOL)purgable;
-(NSUInteger)length;
-(id)initWithFileDescriptor:(int)arg0 size:(NSUInteger)arg1 ;
-(id)initWithPropertyList:(*void)arg0 ;
-(void)dealloc;
-(void)endAccessing;


@end


#endif