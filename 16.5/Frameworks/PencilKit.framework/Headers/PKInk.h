// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINK_H
#define PKINK_H

@class UIColor, NSString, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKInkBehavior.h"

@interface PKInk : NSObject <NSSecureCoding, NSCopying>

 {
    shared_ptr<PKProtobufUnknownFields> _unknownFields;
    ? _sixChannelAddColor;
    ? _sixChannelMultiplyColor;
}


@property (readonly, nonatomic) BOOL _isStrokeGeneratingInk;
@property ? _sixChannelAddColor;
@property ? _sixChannelMultiplyColor;
@property (readonly, nonatomic) CGFloat _weight;
@property (retain, nonatomic) PKInkBehavior *behavior; // ivar: _behavior
@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger inkFormatVersion;
@property (readonly, nonatomic) NSString *inkType;
@property (readonly, nonatomic) NSData *rawValue;
@property (readonly, nonatomic) NSString *variant; // ivar: _variant
@property (readonly, nonatomic) NSUInteger version; // ivar: _version
@property (readonly, nonatomic) CGFloat weight; // ivar: _weight


+(CGFloat)defaultOpacityForIdentifier:(id)arg0 ;
+(CGFloat)defaultWeightForIdentifier:(id)arg0 ;
+(NSInteger)currentInkVersionForInkIdentifier:(id)arg0 ;
+(id)identifierForCommandType:(unsigned int)arg0 wantsObjectErase:(BOOL)arg1 ;
+(id)identifierForInkType:(id)arg0 ;
+(id)inkFromDictionary:(id)arg0 color:(id)arg1 identifier:(id)arg2 ;
+(id)inkFromInk:(id)arg0 color:(id)arg1 ;
+(id)inkFromInk:(id)arg0 weight:(CGFloat)arg1 ;
+(id)inkFromInk:(id)arg0 withBehavior:(id)arg1 ;
+(id)inkWithIdentifier:(id)arg0 color:(id)arg1 ;
+(id)inkWithIdentifier:(id)arg0 color:(id)arg1 variant:(id)arg2 ;
+(id)inkWithIdentifier:(id)arg0 color:(id)arg1 version:(NSUInteger)arg2 variant:(id)arg3 ;
+(id)inkWithIdentifier:(id)arg0 color:(id)arg1 weight:(CGFloat)arg2 ;
+(id)inkWithIdentifier:(id)arg0 properties:(id)arg1 ;
+(id)inkWithIdentifier:(id)arg0 properties:(id)arg1 inkVersion:(NSInteger)arg2 ;
+(id)inkWithType:(id)arg0 color:(id)arg1 weight:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualInk:(id)arg0 ;
-(BOOL)isEqualUnweightedInk:(id)arg0 ;
-(NSUInteger)hashValueForFloat:(CGFloat)arg0 ;
-(id)_copyWithVariant:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithBehavior:(id)arg0 color:(id)arg1 version:(NSUInteger)arg2 variant:(id)arg3 weight:(CGFloat)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 color:(id)arg1 version:(NSUInteger)arg2 variant:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 color:(id)arg1 version:(NSUInteger)arg2 variant:(id)arg3 weight:(CGFloat)arg4 ;
-(id)initWithIdentifier:(id)arg0 color:(id)arg1 version:(NSUInteger)arg2 variant:(id)arg3 weight:(CGFloat)arg4 behavior:(id)arg5 ;
-(id)initWithInkType:(id)arg0 color:(id)arg1 ;
-(id)initWithRawValue:(id)arg0 ;
-(id)initWithUncheckedIdentifier:(id)arg0 color:(id)arg1 version:(NSUInteger)arg2 variant:(id)arg3 weight:(CGFloat)arg4 ;
-(id)initWithV1Archive:(*void)arg0 serializationVersion:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)saveToV1Archive:(*void)arg0 ;


@end


#endif