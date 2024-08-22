// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDTABLEROWPROPERTIES_H
#define WDTABLEROWPROPERTIES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WDTableProperties.h"
#import "WDCharacterProperties.h"

@interface WDTableRowProperties : NSObject <NSCopying>

 {
    WDTableProperties *mTableProperties;
    WDCharacterProperties *mCharacterProperties;
    BOOL mOriginal;
    BOOL mTracked;
    BOOL mResolved;
    ? mOriginalProperties;
    ? mTrackedProperties;
}




-(BOOL)header;
-(BOOL)isHeaderOverridden;
-(BOOL)isHeightOverridden;
-(BOOL)isHeightTypeOverridden;
-(BOOL)isWidthAfterOverridden;
-(BOOL)isWidthAfterTypeOverridden;
-(BOOL)isWidthBeforeOverridden;
-(BOOL)isWidthBeforeTypeOverridden;
-(NSInteger)height;
-(id)characterProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDocument:(id)arg0 ;
-(id)tableProperties;
-(int)heightType;
-(int)resolveMode;
-(int)widthAfterType;
-(int)widthBeforeType;
-(short)widthAfter;
-(short)widthBefore;
-(void)addProperties:(id)arg0 ;
-(void)addPropertiesValues:(struct ? *)arg0 to:(struct ? *)arg1 ;
-(void)setHeader:(BOOL)arg0 ;
-(void)setHeight:(NSInteger)arg0 ;
-(void)setHeightType:(int)arg0 ;
-(void)setResolveMode:(int)arg0 ;
-(void)setWidthAfter:(short)arg0 ;
-(void)setWidthAfterType:(int)arg0 ;
-(void)setWidthBefore:(short)arg0 ;
-(void)setWidthBeforeType:(int)arg0 ;


@end


#endif