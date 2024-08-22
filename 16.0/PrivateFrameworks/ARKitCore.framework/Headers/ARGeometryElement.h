// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARGEOMETRYELEMENT_H
#define ARGEOMETRYELEMENT_H

@protocol NSSecureCoding, MTLBuffer;

#import <Foundation/Foundation.h>


@interface ARGeometryElement : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (nonatomic) NSInteger bytesPerIndex; // ivar: _bytesPerIndex
@property (nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) NSInteger indexCountPerPrimitive;
@property (nonatomic) NSInteger primitiveType; // ivar: _primitiveType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithBuffer:(id)arg0 count:(NSInteger)arg1 bytesPerIndex:(NSInteger)arg2 primitiveType:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif