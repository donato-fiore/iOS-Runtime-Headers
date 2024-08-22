// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLVERTEXATTRIBUTE_H
#define MDLVERTEXATTRIBUTE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MDLVertexAttribute : NSObject <NSCopying>

 {
    ? _initializationValue;
}


@property (nonatomic) NSUInteger bufferIndex; // ivar: _bufferIndex
@property (nonatomic) NSUInteger format; // ivar: _format
@property ? initializationValue;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (nonatomic) CGFloat time; // ivar: _time


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif