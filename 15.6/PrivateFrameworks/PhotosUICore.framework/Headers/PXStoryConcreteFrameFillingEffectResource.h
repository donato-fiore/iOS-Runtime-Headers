// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCONCRETEFRAMEFILLINGEFFECTRESOURCE_H
#define PXSTORYCONCRETEFRAMEFILLINGEFFECTRESOURCE_H

@class NSString;
@protocol PXStoryFrameFillingEffectResource, PXDisplayAsset;


#import "PXStoryConcreteResource.h"

@interface PXStoryConcreteFrameFillingEffectResource : PXStoryConcreteResource <PXStoryFrameFillingEffectResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *px_storyResourceDisplayAsset; // ivar: _displayAsset
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) NSInteger px_storyResourceKind;
@property (readonly, nonatomic) BOOL px_storyResourceUseSmartColor; // ivar: _useSmartColor
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithDisplayAsset:(id)arg0 useSmartColor:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg0 kind:(NSInteger)arg1 ;


@end


#endif