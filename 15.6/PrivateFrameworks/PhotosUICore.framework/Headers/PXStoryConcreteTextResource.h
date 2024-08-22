// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCONCRETETEXTRESOURCE_H
#define PXSTORYCONCRETETEXTRESOURCE_H

@class NSString;
@protocol PXStoryTextResource;


#import "PXStoryConcreteResource.h"
#import "PXStoryTextResourceInfo.h"

@interface PXStoryConcreteTextResource : PXStoryConcreteResource <PXStoryTextResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) NSInteger px_storyResourceKind;
@property (readonly, nonatomic) PXStoryTextResourceInfo *px_storyResourceTextResourceInfo; // ivar: _textResourceInfo
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAssetCollection:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithIdentifier:(id)arg0 kind:(NSInteger)arg1 ;


@end


#endif