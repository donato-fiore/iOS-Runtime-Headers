// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYEXPORTFULLSIZEPLAYERASPECTRATIO_H
#define PXSTORYEXPORTFULLSIZEPLAYERASPECTRATIO_H



#import "PXStoryExportAspectRatio.h"

@interface PXStoryExportFullSizePlayerAspectRatio : PXStoryExportAspectRatio

@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)adjustedForOrientation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)localizedTitle;


@end


#endif