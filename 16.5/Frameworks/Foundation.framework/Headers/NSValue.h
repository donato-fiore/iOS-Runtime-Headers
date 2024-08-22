// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSVALUE_H
#define NSVALUE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSValue : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) ? _cfLexiconWordAttributesValue;
@property (readonly) char * objCType;


+(BOOL)supportsSecureCoding;
+(id)_valueWithCFLexiconWordAttributes:(struct ? )arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)value:(*void)arg0 withObjCType:(char *)arg1 ;
+(id)valueWithBytes:(*void)arg0 objCType:(char *)arg1 ;
+(id)valueWithEdgeInsets:(struct NSEdgeInsets )arg0 ;
+(id)valueWithNonretainedObject:(id)arg0 ;
+(id)valueWithPoint:(struct CGPoint )arg0 ;
+(id)valueWithPointer:(*void)arg0 ;
+(id)valueWithRange:(struct _NSRange )arg0 ;
+(id)valueWithRect:(struct CGRect )arg0 ;
+(id)valueWithSize:(struct CGSize )arg0 ;
+(id)valueWithWeakObject:(id)arg0 ;
-(*void)pointerValue;
-(BOOL)_matchType:(char *)arg0 size:(NSUInteger)arg1 ;
-(BOOL)_matchType:(char *)arg0 size:(NSUInteger)arg1 strict:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToValue:(id)arg0 ;
-(BOOL)isNSValue__;
-(Class)classForCoder;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBytes:(*void)arg0 objCType:(char *)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)nonretainedObjectValue;
-(id)replacementObjectForPortCoder:(id)arg0 ;
-(id)weakObjectValue;
-(struct CGPoint )pointValue;
-(struct CGRect )rectValue;
-(struct CGSize )sizeValue;
-(struct NSEdgeInsets )edgeInsetsValue;
-(struct _NSRange )rangeValue;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getValue:(*void)arg0 ;
-(void)getValue:(*void)arg0 size:(NSUInteger)arg1 ;


@end


#endif