// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LQMPREDICTIONINTERNALRECORD_H
#define LQMPREDICTIONINTERNALRECORD_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LQMPredictionInternalRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly) unsigned int length; // ivar: _length
@property (readonly) unsigned int level; // ivar: _level
@property (readonly) unsigned int offset; // ivar: _offset


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOffset:(unsigned int)arg0 length:(unsigned int)arg1 level:(unsigned int)arg2 confidence:(CGFloat)arg3 ;
-(void)adjustConfidenceTo:(CGFloat)arg0 ;
-(void)adjustLengthTo:(unsigned int)arg0 ;
-(void)adjustOffsetTo:(unsigned int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif