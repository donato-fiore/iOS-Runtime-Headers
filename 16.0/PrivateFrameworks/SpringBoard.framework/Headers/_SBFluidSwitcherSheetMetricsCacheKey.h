// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBFLUIDSWITCHERSHEETMETRICSCACHEKEY_H
#define _SBFLUIDSWITCHERSHEETMETRICSCACHEKEY_H

@class UISApplicationSupportDisplayEdgeInfo;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _SBFluidSwitcherSheetMetricsCacheKey : NSObject <NSCopying>

 {
    CGSize _boundsSize;
    UISApplicationSupportDisplayEdgeInfo *_displayEdgeInfo;
    CGFloat _displayScale;
    NSInteger _interfaceOrientation;
    NSUInteger _cachedHash;
    NSInteger _userInterfaceIdiom;
    NSInteger _configuration;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBoundsSize:(struct CGSize )arg0 interfaceOrientation:(NSInteger)arg1 configuration:(NSInteger)arg2 userInterfaceIdiom:(NSInteger)arg3 displayScale:(CGFloat)arg4 displayEdgeInfo:(id)arg5 ;


@end


#endif