// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDCOLORREFERENCE_H
#define EDCOLORREFERENCE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "EDResources.h"

@interface EDColorReference : NSObject <NSCopying>

 {
    EDResources *mResources;
    int mSystemColorID;
    NSUInteger mColorIndex;
    NSUInteger mThemeIndex;
    CGFloat mTint;
}




+(id)colorReferenceWithColor:(id)arg0 resources:(id)arg1 ;
+(id)colorReferenceWithColorIndex:(NSUInteger)arg0 resources:(id)arg1 ;
+(id)colorReferenceWithResources:(id)arg0 ;
+(id)colorReferenceWithSystemColorID:(int)arg0 resources:(id)arg1 ;
+(id)colorReferenceWithThemeIndex:(NSUInteger)arg0 tint:(CGFloat)arg1 resources:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToColorReference:(id)arg0 ;
-(BOOL)isValid;
-(CGFloat)tint;
-(NSUInteger)colorIndex;
-(NSUInteger)hash;
-(NSUInteger)themeIndex;
-(id)color;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithColor:(id)arg0 resources:(id)arg1 ;
-(id)initWithResources:(id)arg0 ;
-(int)systemColorID;


@end


#endif