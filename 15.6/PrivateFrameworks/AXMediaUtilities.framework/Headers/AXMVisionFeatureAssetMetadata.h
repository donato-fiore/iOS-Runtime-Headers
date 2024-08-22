// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMVISIONFEATUREASSETMETADATA_H
#define AXMVISIONFEATUREASSETMETADATA_H

@class NSString, NSURL, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMVisionFeatureAssetMetadata : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *EXIFUserComment; // ivar: _EXIFUserComment
@property (retain, nonatomic) NSString *IPTCCaptionAbstract; // ivar: _IPTCCaptionAbstract
@property (retain, nonatomic) NSString *PNGImageDescription; // ivar: _PNGImageDescription
@property (retain, nonatomic) NSString *TIFFImageDescription; // ivar: _TIFFImageDescription
@property (readonly, nonatomic) BOOL assetLocallyAvailable;
@property (retain, nonatomic) NSURL *assetURL; // ivar: _assetURL
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *imageAssetLocalIdentifier; // ivar: _imageAssetLocalIdentifier
@property (nonatomic) BOOL imageAssetLocallyAvailable; // ivar: _imageAssetLocallyAvailable
@property (nonatomic) NSInteger imageAssetWellKnownPHPhotoLibraryIdentifier; // ivar: _imageAssetWellKnownPHPhotoLibraryIdentifier
@property (readonly, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) NSString *localizedTypeDescription; // ivar: _localizedTypeDescription
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *uti; // ivar: _uti
@property (readonly, nonatomic) NSInteger wellKnownPHPhotoLibraryIdentifier;


+(BOOL)supportsSecureCoding;
+(id)assetMetadataFromURL:(id)arg0 ;
+(id)assetMetadataFromURL:(id)arg0 localIdentifier:(id)arg1 wellKnownPHPhotoLibraryIdentifier:(NSInteger)arg2 ;
+(id)assetMetadataWithLocalIdentifier:(id)arg0 wellKnownPHPhotoLibraryIdentifier:(NSInteger)arg1 creationDate:(id)arg2 UTI:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif