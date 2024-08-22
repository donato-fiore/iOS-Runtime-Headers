// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVAFEATUREBUFFER_H
#define CVAFEATUREBUFFER_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVAFeatureBuffer : NSObject <NSSecureCoding>



@property (nonatomic) unsigned int bytesPerRow; // ivar: _bytesPerRow
@property (nonatomic) BOOL compressed; // ivar: _compressed
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) unsigned int height; // ivar: _height
@property (retain, nonatomic) NSString *sourceStreamID; // ivar: _sourceStreamID
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int width; // ivar: _width


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPixelBufferRef:(struct __CVBuffer *)arg0 timestamp:(CGFloat)arg1 streamID:(id)arg2 ;
-(id)reduceBuffer:(*void)arg0 ;
-(struct __CVBuffer *)getPixelBuffer;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif