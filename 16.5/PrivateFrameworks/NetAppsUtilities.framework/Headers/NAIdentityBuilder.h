// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NAIDENTITYBUILDER_H
#define NAIDENTITYBUILDER_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NAIdentity.h"

@interface NAIdentityBuilder : NSObject <NSCopying>



@property (retain, nonatomic) NAIdentity *builtIdentity; // ivar: _builtIdentity
@property (retain, nonatomic) NSMutableArray *characteristics; // ivar: _characteristics


+(id)buildPointerIdentity;
+(id)builder;
+(id)builderWithIdentity:(id)arg0 ;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isObject:(id)arg0 equalToObject:(id)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)hashOfObject:(id)arg0 ;
-(id)appendCharacteristic:(id)arg0 ;
// -(id)appendCharacteristic:(id)arg0 withRole:(unk)arg1  ;
// -(id)appendCharacteristic:(id)arg0 withRole:(unk)arg1 comparatorBlock:(NSInteger)arg2 hashBlock:(id)arg3  ;
-(id)appendDoubleCharacteristic:(id)arg0 ;
// -(id)appendDoubleCharacteristic:(id)arg0 withRole:(unk)arg1  ;
-(id)appendFloatCharacteristic:(id)arg0 ;
// -(id)appendFloatCharacteristic:(id)arg0 withRole:(unk)arg1  ;
-(id)appendIntegerCharacteristic:(id)arg0 ;
// -(id)appendIntegerCharacteristic:(id)arg0 withRole:(unk)arg1  ;
-(id)appendRangeCharacteristic:(id)arg0 ;
// -(id)appendRangeCharacteristic:(id)arg0 withRole:(unk)arg1  ;
-(id)appendUnsignedIntegerCharacteristic:(id)arg0 ;
// -(id)appendUnsignedIntegerCharacteristic:(id)arg0 withRole:(unk)arg1  ;
-(id)build;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentity:(id)arg0 ;


@end


#endif