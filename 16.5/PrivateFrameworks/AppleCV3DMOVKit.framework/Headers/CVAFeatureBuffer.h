// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVAFEATUREBUFFER_H
#define CVAFEATUREBUFFER_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVAFeatureBuffer : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger bytesPerRow; // ivar: _bytesPerRow
@property (nonatomic) BOOL compressed; // ivar: _compressed
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSUInteger frameId; // ivar: _frameId
@property (nonatomic) NSUInteger height; // ivar: _height
@property (nonatomic) *__CVBuffer pixelBufferRef; // ivar: _pixelBufferRef
@property (nonatomic) BOOL reduce; // ivar: _reduce
@property (retain, nonatomic) NSString *sourceStreamID; // ivar: _sourceStreamID
@property (nonatomic) NSUInteger syncTimestamp; // ivar: _syncTimestamp
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSUInteger width; // ivar: _width


+(BOOL)supportsSecureCoding;
+(id)classes;
+(id)streamName:(id)arg0 ;
-(BOOL)shouldReduce:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPixelBufferRef:(struct __CVBuffer *)arg0 timestamp:(CGFloat)arg1 streamID:(id)arg2 ;
-(id)initWithPixelBufferRef:(struct __CVBuffer *)arg0 timestamp:(CGFloat)arg1 streamID:(id)arg2 reduce:(BOOL)arg3 compress:(BOOL)arg4 ;
-(id)reduceBuffer:(*void)arg0 ;
-(struct __CVBuffer *)getPixelBuffer;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif