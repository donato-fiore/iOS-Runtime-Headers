// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADLINEEND_H
#define OADLINEEND_H

@protocol NSCopying;


#import "OADProperties.h"

@interface OADLineEnd : OADProperties <NSCopying>

 {
    unsigned char mType;
    unsigned char mWidth;
    unsigned char mLength;
    BOOL mIsTypeOverridden;
    BOOL mIsWidthOverridden;
    BOOL mIsLengthOverridden;
}




+(id)defaultProperties;
+(id)stringForLineEndLength:(unsigned char)arg0 ;
+(id)stringForLineEndType:(unsigned char)arg0 ;
+(id)stringForLineEndWidth:(unsigned char)arg0 ;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLengthOverridden;
-(BOOL)isTypeOverridden;
-(BOOL)isWidthOverridden;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDefaults;
-(id)initWithType:(unsigned char)arg0 width:(unsigned char)arg1 length:(unsigned char)arg2 ;
-(unsigned char)length;
-(unsigned char)type;
-(unsigned char)width;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setLength:(unsigned char)arg0 ;
-(void)setType:(unsigned char)arg0 ;
-(void)setWidth:(unsigned char)arg0 ;


@end


#endif