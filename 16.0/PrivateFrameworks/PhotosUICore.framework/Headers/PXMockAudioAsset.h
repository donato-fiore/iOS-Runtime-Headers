// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMOCKAUDIOASSET_H
#define PXMOCKAUDIOASSET_H

@class NSString, NSArray;
@protocol PXStorySongResource, PXMutableMockAudioAsset, PXAudioAsset, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXMockAudioAsset : NSObject <PXStorySongResource, PXMutableMockAudioAsset, PXAudioAsset>



@property (copy, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *artworkDisplayAsset;
@property (copy, nonatomic) NSString *artworkURLFormat; // ivar: _artworkURLFormat
@property (readonly, copy, nonatomic) NSString *assetTagsDescription;
@property (retain, nonatomic) Class audioSessionClass; // ivar: _audioSessionClass
@property (readonly, nonatomic) NSInteger catalog;
@property (copy, nonatomic) NSString *colorGradeCategory; // ivar: _colorGradeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultMediaProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? duration; // ivar: _duration
@property (copy, nonatomic) NSArray *entryPoints; // ivar: _entryPoints
@property (nonatomic) ? exportableDuration; // ivar: _exportableDuration
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
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isAudioEqualToAsset:(id)arg0 ;
-(id)artworkURLForTargetPixelSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif