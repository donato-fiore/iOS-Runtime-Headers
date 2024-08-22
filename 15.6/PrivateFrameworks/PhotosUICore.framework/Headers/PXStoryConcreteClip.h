// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCONCRETECLIP_H
#define PXSTORYCONCRETECLIP_H

@class PFStoryRecipeDisplayAssetNormalization, NSString;
@protocol PXStoryClip, PXStoryResource;

#import <Foundation/Foundation.h>

#import "PXStoryResourcesDataSource.h"

@interface PXStoryConcreteClip : NSObject <PXStoryClip>



@property (readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *colorNormalization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) ? info; // ivar: _info
@property (readonly, nonatomic) NSObject<PXStoryResource> *resource; // ivar: _resource
@property (readonly, nonatomic) NSInteger resourceIndex; // ivar: _resourceIndex
@property (readonly, nonatomic) NSInteger resourceKind; // ivar: _resourceKind
@property (readonly, nonatomic) NSInteger resourceOccurrenceIndex; // ivar: _resourceOccurrenceIndex
@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource; // ivar: _resourcesDataSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? videoTimeRange;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClip:(id)arg0 ;
-(BOOL)isVisuallyEqualToClip:(id)arg0 ;
-(id)copyWithInfo:(struct ? )arg0 ;
-(id)init;
-(id)initWithInfo:(struct ? )arg0 resourceKind:(NSInteger)arg1 resourceIndex:(NSInteger)arg2 resourceOccurrenceIndex:(NSInteger)arg3 resourcesDataSource:(id)arg4 ;
-(id)videoHighlight;
-(struct ? )_videoTimeRangeForTargetDuration:(struct ? )arg0 ;
-(struct ? )playbackTimeRangeForClipDuration:(CGFloat)arg0 ;


@end


#endif