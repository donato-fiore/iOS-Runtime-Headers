// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLDATACHUNK_H
#define PMLDATACHUNK_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PMLDataChunk : NSObject <NSCopying>

 {
    NSData *_backingData;
    NSData *_superdata;
}




+(id)chunkOfType:(unsigned int)arg0 data:(id)arg1 superdata:(id)arg2 ;
+(id)chunksFromData:(id)arg0 ;
+(id)chunksFromFileAtPath:(id)arg0 ;
+(id)serializeChunks:(id)arg0 ;
+(unsigned int)dataChunkType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(void)setSuperdata:(id)arg0 ;


@end


#endif