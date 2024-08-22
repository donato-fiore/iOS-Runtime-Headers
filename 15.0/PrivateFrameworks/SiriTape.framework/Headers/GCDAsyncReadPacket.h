// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCDASYNCREADPACKET_H
#define GCDASYNCREADPACKET_H

@class NSMutableData, NSData;

#import <Foundation/Foundation.h>


@interface GCDAsyncReadPacket : NSObject {
    NSMutableData *buffer;
    NSUInteger startOffset;
    NSUInteger bytesDone;
    NSUInteger maxLength;
    CGFloat timeout;
    NSUInteger readLength;
    NSData *term;
    BOOL bufferOwner;
    NSUInteger originalBufferLength;
    NSInteger tag;
}




-(NSInteger)searchForTermAfterPreBuffering:(NSInteger)arg0 ;
-(NSUInteger)optimalReadLengthWithDefault:(NSUInteger)arg0 shouldPreBuffer:(*BOOL)arg1 ;
-(NSUInteger)readLengthForNonTermWithHint:(NSUInteger)arg0 ;
-(NSUInteger)readLengthForTermWithHint:(NSUInteger)arg0 shouldPreBuffer:(*BOOL)arg1 ;
-(NSUInteger)readLengthForTermWithPreBuffer:(id)arg0 found:(*BOOL)arg1 ;
-(id)initWithData:(id)arg0 startOffset:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 timeout:(CGFloat)arg3 readLength:(NSUInteger)arg4 terminator:(id)arg5 tag:(NSInteger)arg6 ;
-(void)ensureCapacityForAdditionalDataOfLength:(NSUInteger)arg0 ;


@end


#endif