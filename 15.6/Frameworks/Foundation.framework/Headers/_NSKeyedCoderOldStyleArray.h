// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSKEYEDCODEROLDSTYLEARRAY_H
#define _NSKEYEDCODEROLDSTYLEARRAY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _NSKeyedCoderOldStyleArray : NSObject <NSSecureCoding>

 {
    *void _addr;
    NSUInteger _count;
    NSUInteger _size;
    char _type;
    BOOL _decoded;
    char _padding;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjCType:(char)arg0 count:(NSUInteger)arg1 at:(*void)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fillObjCType:(char)arg0 count:(NSUInteger)arg1 at:(*void)arg2 ;


@end


#endif