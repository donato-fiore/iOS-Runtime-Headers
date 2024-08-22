// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYEXPORTASPECTRATIO_H
#define PXSTORYEXPORTASPECTRATIO_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXStoryExportOrientation.h"

@interface PXStoryExportAspectRatio : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) PXStoryExportOrientation *orientation; // ivar: _orientation
@property (readonly, nonatomic) CGFloat ratio; // ivar: _ratio
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)defaultAspectRatioWithFullSizePlayerAspect:(id)arg0 orientation:(id)arg1 ;
+(id)pickableAspectRatiosForOrientation:(id)arg0 fullSizePlayerAspect:(id)arg1 ;
+(id)standardAspectRatioForSize:(struct CGSize )arg0 ;
+(id)standardAspects;
+(void)setDefaultAspectRatio:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_userDefaultIdentifier;
-(id)adjustedForOrientation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAspectType:(NSInteger)arg0 ;
-(id)initWithAspectType:(NSInteger)arg0 ratio:(CGFloat)arg1 ;
-(struct CGSize )sizeWithMinDimension:(CGFloat)arg0 ;
-(struct CGSize )sizeWithMinDimension:(CGFloat)arg0 orientation:(id)arg1 ;


@end


#endif