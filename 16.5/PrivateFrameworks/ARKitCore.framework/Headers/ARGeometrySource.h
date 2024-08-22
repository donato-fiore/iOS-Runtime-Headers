// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARGEOMETRYSOURCE_H
#define ARGEOMETRYSOURCE_H

@protocol NSSecureCoding, MTLBuffer;

#import <Foundation/Foundation.h>


@interface ARGeometrySource : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (nonatomic) NSInteger componentsPerVector; // ivar: _componentsPerVector
@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) NSUInteger format; // ivar: _format
@property (nonatomic) NSInteger offset; // ivar: _offset
@property (nonatomic) NSInteger stride; // ivar: _stride


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)componentSize;
-(id)description;
-(id)initWithBuffer:(id)arg0 count:(NSInteger)arg1 format:(NSUInteger)arg2 componentsPerVector:(NSInteger)arg3 offset:(NSInteger)arg4 stride:(NSInteger)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif