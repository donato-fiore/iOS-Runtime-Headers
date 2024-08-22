// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYNULLSONGRESOURCE_H
#define PXSTORYNULLSONGRESOURCE_H

@class NSString;
@protocol PXStorySongResource, PXAudioAsset;

#import <Foundation/Foundation.h>


@interface PXStoryNullSongResource : NSObject <PXStorySongResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger px_storyResourceKind; // ivar: _resourceKind
@property (readonly, nonatomic) NSObject<PXAudioAsset> *px_storyResourceSongAsset; // ivar: _asset
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif