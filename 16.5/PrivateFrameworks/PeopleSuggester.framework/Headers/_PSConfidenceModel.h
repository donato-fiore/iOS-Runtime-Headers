// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSCONFIDENCEMODEL_H
#define _PSCONFIDENCEMODEL_H

@class NSMutableArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSConfidenceModel : NSObject <NSCopying, NSSecureCoding>



@property int bufferHead; // ivar: _bufferHead
@property int bufferSize; // ivar: _bufferSize
@property (retain, nonatomic) NSMutableArray *circularBuffer; // ivar: _circularBuffer
@property int minimumInstanceCount; // ivar: _minimumInstanceCount
@property CGFloat sum; // ivar: _sum


+(BOOL)supportsSecureCoding;
-(CGFloat)getConfidence;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBufferSize:(int)arg0 minimumInstanceCount:(int)arg1 ;
-(id)initWithBufferSize:(int)arg0 sum:(CGFloat)arg1 circularBuffer:(id)arg2 bufferHead:(int)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetBuffer;


@end


#endif