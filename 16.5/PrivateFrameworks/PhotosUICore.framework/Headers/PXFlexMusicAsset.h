// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFLEXMUSICASSET_H
#define PXFLEXMUSICASSET_H

@class NSString, NSURL, NSArray;
@protocol PXStorySongResource, PXMutableFlexMusicAsset, PXAudioAsset, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXFlexMusicAsset : NSObject <PXStorySongResource, PXMutableFlexMusicAsset, PXAudioAsset>



@property (copy, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *artworkDisplayAsset;
@property (readonly, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (copy, nonatomic) NSString *assetTagsDescription; // ivar: _assetTagsDescription
@property (readonly, nonatomic) Class audioSessionClass;
@property (readonly, nonatomic) NSInteger catalog;
@property (copy, nonatomic) NSString *colorGradeCategory; // ivar: _colorGradeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultMediaProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSArray *entryPoints;
@property (readonly, nonatomic) ? exportableDuration;
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger pace; // ivar: _pace
@property (readonly, nonatomic) NSObject<PXAudioAsset> *previewAudioAsset;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) NSInteger px_storyResourceKind;
@property (readonly, nonatomic) NSObject<PXAudioAsset> *px_storyResourceSongAsset;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) ? targetDuration; // ivar: _targetDuration
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isAudioEqualToAsset:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif