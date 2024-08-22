// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRCONSTANTENGINEERINGVALUE_H
#define XRCONSTANTENGINEERINGVALUE_H

@class NSString;
@protocol XREngineeringValue, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface XRConstantEngineeringValue : NSObject <XREngineeringValue, NSSecureCoding, NSCopying>

 {
    NSString *_mnemonic;
    unsigned short _resolvedEtypeID;
    unsigned char _implClass;
    id *_value;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short engineeringType;
@property (readonly, nonatomic) NSString *engineeringTypeMnemonic;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned char implClass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)engineeringValueOfType:(id)arg0 value:(id)arg1 ;
+(id)engineeringValueWithTypeID:(unsigned short)arg0 value:(id)arg1 ;
-(BOOL)getLengthOfUint64Representation:(*NSUInteger)arg0 ;
-(BOOL)getValue:(*id)arg0 fieldIndex:(unsigned short)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConstantEngineeringValue:(id)arg0 ;
-(BOOL)isValid;
-(CGFloat)fixedDecimal;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)uint64;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)objectValue;
-(id)string;
-(unsigned int)uint32;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateUint64Values:(id)arg0 ;


@end


#endif