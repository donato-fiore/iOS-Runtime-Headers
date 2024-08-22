// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPLINKMETADATA_H
#define LPLINKMETADATA_H

@class NSMutableArray, NSURL, NSArray, NSString, NSItemProvider, SYContentItem;
@protocol NSCopying, NSSecureCoding, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "LPARAsset.h"
#import "LPARAssetMetadata.h"
#import "LPAssociatedApplicationMetadata.h"
#import "LPAudio.h"
#import "LPAudioMetadata.h"
#import "LPImage.h"
#import "LPIconMetadata.h"
#import "LPImageMetadata.h"
#import "LPSourceApplicationMetadata.h"
#import "LPSpecializationMetadata.h"
#import "LPVideo.h"
#import "LPVideoMetadata.h"

@interface LPLinkMetadata : NSObject <NSCopying, NSSecureCoding>

 {
    NSObject<OS_dispatch_group> *_asynchronousLoadGroup;
    NSUInteger _asynchronousLoadDeferralTokenCount;
    BOOL _wasCopiedFromIncompleteMetadata;
    NSMutableArray *_pendingAsynchronousLoadUpdateHandlers;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSUInteger _encodedSize;
@property (copy, nonatomic) NSArray *alternateImages; // ivar: _alternateImages
@property (copy, nonatomic) NSString *appleContentID; // ivar: _appleContentID
@property (copy, nonatomic) NSString *appleSummary; // ivar: _appleSummary
@property (retain, nonatomic) LPARAsset *arAsset; // ivar: _arAsset
@property (retain, nonatomic) LPARAssetMetadata *arAssetMetadata; // ivar: _arAssetMetadata
@property (copy, nonatomic) NSArray *arAssets; // ivar: _arAssets
@property (copy, nonatomic) LPAssociatedApplicationMetadata *associatedApplication; // ivar: _associatedApplication
@property (retain, nonatomic) LPAudio *audio; // ivar: _audio
@property (retain, nonatomic) LPAudioMetadata *audioMetadata; // ivar: _audioMetadata
@property (copy, nonatomic) NSArray *audios; // ivar: _audios
@property (copy, nonatomic) NSString *creator; // ivar: _creator
@property (copy, nonatomic) NSString *creatorFacebookProfile; // ivar: _creatorFacebookProfile
@property (copy, nonatomic) NSString *creatorTwitterUsername; // ivar: _creatorTwitterUsername
@property (retain, nonatomic) LPImage *icon; // ivar: _icon
@property (retain, nonatomic) LPIconMetadata *iconMetadata; // ivar: _iconMetadata
@property (retain, nonatomic) NSItemProvider *iconProvider;
@property (copy, nonatomic) NSArray *icons; // ivar: _icons
@property (retain, nonatomic) LPImage *image; // ivar: _image
@property (retain, nonatomic) LPImageMetadata *imageMetadata; // ivar: _imageMetadata
@property (retain, nonatomic) NSItemProvider *imageProvider;
@property (copy, nonatomic) NSArray *images; // ivar: _images
@property (copy, nonatomic) NSString *itemType; // ivar: _itemType
@property (retain, nonatomic) NSURL *originalURL; // ivar: _originalURL
@property (copy, nonatomic) SYContentItem *originatingSynapseContentItem; // ivar: _originatingSynapseContentItem
@property (copy, nonatomic) NSURL *relatedURL; // ivar: _relatedURL
@property (retain, nonatomic) NSURL *remoteVideoURL;
@property (copy, nonatomic) NSString *selectedText; // ivar: _selectedText
@property (copy, nonatomic) NSString *siteName; // ivar: _siteName
@property (copy, nonatomic) LPSourceApplicationMetadata *sourceApplication; // ivar: _sourceApplication
@property (copy, nonatomic) LPSpecializationMetadata *specialization; // ivar: _specialization
@property (copy, nonatomic) NSArray *streamingVideos; // ivar: _streamingVideos
@property (copy, nonatomic) NSString *summary; // ivar: _summary
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) unsigned int version; // ivar: _version
@property (retain, nonatomic) LPVideo *video; // ivar: _video
@property (retain, nonatomic) LPVideoMetadata *videoMetadata; // ivar: _videoMetadata
@property (retain, nonatomic) NSItemProvider *videoProvider;
@property (copy, nonatomic) NSArray *videos; // ivar: _videos


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+(id)metadataWithDataRepresentation:(id)arg0 ;
-(BOOL)_hasAnyAsynchronousFields;
-(BOOL)_isDeferringAsynchronousLoads;
-(BOOL)_isLoadingAsynchronousFields;
-(BOOL)_loadAsynchronousFieldsWithLoadGroup:(id)arg0 ;
-(BOOL)_wasCopiedFromIncompleteMetadata;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_createAsynchronousLoadDeferralToken:(SEL)arg0 ;
-(id)_initWithDictionary:(id)arg0 ;
-(id)_initWithSynapseContentItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_copyPropertiesFrom:(id)arg0 onlyUpgradeFields:(BOOL)arg1 ;
-(void)_copyPropertiesOnlyUpgradingFieldsFrom:(id)arg0 ;
-(void)_decodeAllImagesWithMaximumSize:(struct CGSize )arg0 ;
-(void)_enumerateAsynchronousFields:(id)arg0 ;
-(void)_enumerateSubstitutableFields:(id)arg0 ;
-(void)_invokePendingAsynchronousLoadUpdateHandlers;
-(void)_loadAsynchronousFieldsWithUpdateHandler:(id)arg0 ;
-(void)_populateMetadataForBackwardCompatibility;
-(void)_reduceSizeByDroppingResourcesIfNeeded;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif