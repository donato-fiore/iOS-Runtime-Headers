// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNBUILDATTRIBUTEVALUE_H
#define KNBUILDATTRIBUTEVALUE_H

@class TSKSosBase, NSString, TSDPathSource, TSUColor;
@protocol NSCopying, NSObject;



@interface KNBuildAttributeValue : TSKSosBase <NSCopying>

 {
    int _integerValue;
    CGFloat _doubleValue;
    BOOL _boolValue;
    NSString *_stringValue;
    TSDPathSource *_pathSourceValue;
    TSUColor *_colorValue;
    BOOL _definedIntegerValue;
    BOOL _definedDoubleValue;
    BOOL _definedBoolValue;
    BOOL _definedStringValue;
    BOOL _definedPathSourceValue;
    BOOL _definedColorValue;
}


@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) TSUColor *colorValue;
@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly, nonatomic) NSInteger integerValue;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSObject<NSObject> *objectValue;
@property (readonly, nonatomic) TSDPathSource *pathSourceValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSUInteger type;


+(id)emptyValue;
+(id)valueWithBool:(BOOL)arg0 ;
+(id)valueWithColor:(id)arg0 ;
+(id)valueWithDouble:(CGFloat)arg0 ;
+(id)valueWithInteger:(NSInteger)arg0 ;
+(id)valueWithPathSource:(id)arg0 ;
+(id)valueWithString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)p_attributesAreEmpty;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBoolValue:(BOOL)arg0 ;
-(id)initWithColorValue:(id)arg0 ;
-(id)initWithDoubleValue:(CGFloat)arg0 ;
-(id)initWithIntegerValue:(NSInteger)arg0 ;
-(id)initWithPathSourceValue:(id)arg0 ;
-(id)initWithStringValue:(id)arg0 ;


@end


#endif