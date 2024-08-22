// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BLASTDOORLPLINKMETADATA_H
#define _BLASTDOORLPLINKMETADATA_H

@class NSURL, NSArray, NSString, NSItemProvider;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_BlastDoorLPARAsset.h"
#import "_BlastDoorLPARAssetMetadata.h"
#import "_BlastDoorLPAssociatedApplicationMetadata.h"
#import "_BlastDoorLPAudio.h"
#import "_BlastDoorLPAudioMetadata.h"
#import "_BlastDoorLPImage.h"
#import "_BlastDoorLPIconMetadata.h"
#import "_BlastDoorLPImageMetadata.h"
#import "_BlastDoorLPSpecializationMetadata.h"
#import "_BlastDoorLPVideo.h"
#import "_BlastDoorLPVideoMetadata.h"

@interface _BlastDoorLPLinkMetadata : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSUInteger _encodedSize;
@property (copy, nonatomic) NSArray *alternateImages; // ivar: _alternateImages
@property (copy, nonatomic) NSString *appleContentID; // ivar: _appleContentID
@property (copy, nonatomic) NSString *appleSummary; // ivar: _appleSummary
@property (retain, nonatomic) _BlastDoorLPARAsset *arAsset; // ivar: _arAsset
@property (retain, nonatomic) _BlastDoorLPARAssetMetadata *arAssetMetadata; // ivar: _arAssetMetadata
@property (copy, nonatomic) NSArray *arAssets; // ivar: _arAssets
@property (copy, nonatomic) _BlastDoorLPAssociatedApplicationMetadata *associatedApplication; // ivar: _associatedApplication
@property (retain, nonatomic) _BlastDoorLPAudio *audio; // ivar: _audio
@property (retain, nonatomic) _BlastDoorLPAudioMetadata *audioMetadata; // ivar: _audioMetadata
@property (copy, nonatomic) NSArray *audios; // ivar: _audios
@property (copy, nonatomic) NSString *creator; // ivar: _creator
@property (copy, nonatomic) NSString *creatorFacebookProfile; // ivar: _creatorFacebookProfile
@property (copy, nonatomic) NSString *creatorTwitterUsername; // ivar: _creatorTwitterUsername
@property (retain, nonatomic) _BlastDoorLPImage *icon; // ivar: _icon
@property (retain, nonatomic) _BlastDoorLPIconMetadata *iconMetadata; // ivar: _iconMetadata
@property (retain, nonatomic) NSItemProvider *iconProvider; // ivar: _iconProvider
@property (copy, nonatomic) NSArray *icons; // ivar: _icons
@property (retain, nonatomic) _BlastDoorLPImage *image; // ivar: _image
@property (retain, nonatomic) _BlastDoorLPImageMetadata *imageMetadata; // ivar: _imageMetadata
@property (retain, nonatomic) NSItemProvider *imageProvider; // ivar: _imageProvider
@property (copy, nonatomic) NSArray *images; // ivar: _images
@property (copy, nonatomic) NSString *itemType; // ivar: _itemType
@property (retain, nonatomic) NSURL *originalURL; // ivar: _originalURL
@property (copy, nonatomic) NSURL *relatedURL; // ivar: _relatedURL
@property (retain, nonatomic) NSURL *remoteVideoURL; // ivar: _remoteVideoURL
@property (copy, nonatomic) NSString *selectedText; // ivar: _selectedText
@property (copy, nonatomic) NSString *siteName; // ivar: _siteName
@property (copy, nonatomic) _BlastDoorLPSpecializationMetadata *specialization; // ivar: _specialization
@property (copy, nonatomic) NSArray *streamingVideos; // ivar: _streamingVideos
@property (copy, nonatomic) NSString *summary; // ivar: _summary
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) unsigned int version; // ivar: _version
@property (retain, nonatomic) _BlastDoorLPVideo *video; // ivar: _video
@property (retain, nonatomic) _BlastDoorLPVideoMetadata *videoMetadata; // ivar: _videoMetadata
@property (retain, nonatomic) NSItemProvider *videoProvider; // ivar: _videoProvider
@property (copy, nonatomic) NSArray *videos; // ivar: _videos


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+(id)metadataWithDataRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_copyPropertiesFrom:(id)arg0 onlyUpgradeFields:(BOOL)arg1 ;
-(void)_copyPropertiesOnlyUpgradingFieldsFrom:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif