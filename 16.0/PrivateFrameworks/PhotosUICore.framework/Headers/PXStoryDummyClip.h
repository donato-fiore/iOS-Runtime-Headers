// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYDUMMYCLIP_H
#define PXSTORYDUMMYCLIP_H

@class PFStoryRecipeDisplayAssetNormalization, NSString;
@protocol PXStoryClip, PXStoryResource;

#import <Foundation/Foundation.h>


@interface PXStoryDummyClip : NSObject <PXStoryClip>



@property (readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *colorNormalization; // ivar: _colorNormalization
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) ? info; // ivar: _info
@property (readonly, nonatomic) NSObject<PXStoryResource> *resource; // ivar: _resource
@property (readonly, nonatomic) NSString *resourceIdentifier; // ivar: _resourceIdentifier
@property (readonly, nonatomic) NSInteger resourceOccurrenceIndex; // ivar: _resourceOccurrenceIndex
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? videoTimeRange; // ivar: _videoTimeRange


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClip:(id)arg0 ;
-(BOOL)isVisuallyEqualToClip:(id)arg0 ;
-(id)copyWithInfo:(struct ? )arg0 ;
-(id)init;
-(id)initWithInfo:(struct ? )arg0 resource:(id)arg1 resourceOccurrenceIndex:(NSInteger)arg2 ;
-(struct ? )playbackTimeRangeForClipDuration:(CGFloat)arg0 ;


@end


#endif