// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXAPPLEMUSICPLACEHOLDERASSET_H
#define PXAPPLEMUSICPLACEHOLDERASSET_H

@class NSString;
@protocol PXStorySongResource, PXAudioAsset;


#import "PXPlaceholderAudioAsset.h"

@interface PXAppleMusicPlaceholderAsset : PXPlaceholderAudioAsset <PXStorySongResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) NSInteger px_storyResourceKind;
@property (readonly, nonatomic) NSObject<PXAudioAsset> *px_storyResourceSongAsset;
@property (readonly) Class superclass;


-(BOOL)isAudioEqualToAsset:(id)arg0 ;
-(id)cueSource;
-(id)initWithCatalog:(NSInteger)arg0 identifier:(id)arg1 audioSessionClass:(Class)arg2 ;
-(id)initWithStoreID:(id)arg0 ;


@end


#endif