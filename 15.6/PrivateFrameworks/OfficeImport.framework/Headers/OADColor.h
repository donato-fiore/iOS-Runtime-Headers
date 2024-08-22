// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADCOLOR_H
#define OADCOLOR_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OADColor : NSObject <NSCopying>

 {
    NSMutableArray *mTransforms;
}




+(float)alphaWithColor:(id)arg0 ;
+(id)basicMapOfColor:(id)arg0 colorMap:(id)arg1 colorScheme:(id)arg2 colorPalette:(id)arg3 ;
+(id)mapAdjustedColor:(id)arg0 colorMap:(id)arg1 colorScheme:(id)arg2 colorPalette:(id)arg3 ;
+(id)rgbColorWithColor:(id)arg0 colorMap:(id)arg1 colorScheme:(id)arg2 colorPalette:(id)arg3 ;
+(id)tsuColorWithColor:(id)arg0 colorMap:(id)arg1 colorScheme:(id)arg2 colorPalette:(id)arg3 ;
+(id)tsuColorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 ;
+(id)tsuColorWithRgbColor:(id)arg0 ;
+(int)mapSchemeColorID:(int)arg0 colorMap:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)colorForStyleColor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)transforms;
-(void)addTransform:(id)arg0 ;
-(void)addTransformOfType:(int)arg0 ;
-(void)addTransformOfType:(int)arg0 value:(float)arg1 ;
-(void)setTransforms:(id)arg0 ;


@end


#endif