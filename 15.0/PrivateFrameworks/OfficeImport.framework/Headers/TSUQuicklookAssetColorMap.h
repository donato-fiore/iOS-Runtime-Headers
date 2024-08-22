// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUQUICKLOOKASSETCOLORMAP_H
#define TSUQUICKLOOKASSETCOLORMAP_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSUQuicklookAssetColorMap : NSObject

@property (retain, nonatomic) NSString *appAssetPath; // ivar: mAppAssetPath
@property (retain, nonatomic) NSMutableDictionary *assetMap; // ivar: mAssetMap


+(BOOL)hasAppAssets;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)colorForResource:(id)arg0 ;
+(id)locatorForSageChartTextureSet:(id)arg0 image:(id)arg1 ;
+(id)quicklookAssetMap;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)retain;
-(void)release;


@end


#endif