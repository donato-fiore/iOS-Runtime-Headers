// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNMTLBUFFER_H
#define SCNMTLBUFFER_H

@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface SCNMTLBuffer : NSObject

@property (retain, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (readonly, nonatomic) *void contents;
@property (nonatomic) id *dataSource; // ivar: _dataSource
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property NSInteger usedCount; // ivar: _usedCount


-(NSInteger)decrementUsedCount;
-(void)dealloc;
-(void)incrementUsedCount;


@end


#endif