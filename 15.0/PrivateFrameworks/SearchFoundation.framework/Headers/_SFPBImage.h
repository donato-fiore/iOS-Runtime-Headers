// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBIMAGE_H
#define _SFPBIMAGE_H

@class PBCodable, NSString, NSData;
@protocol _SFPBImage, NSSecureCoding;


#import "_SFPBAppIconImage.h"
#import "_SFPBCalendarImage.h"
#import "_SFPBContactImage.h"
#import "_SFPBGraphicalFloat.h"
#import "_SFPBLocalImage.h"
#import "_SFPBMediaArtworkImage.h"
#import "_SFPBMonogramImage.h"
#import "_SFPBPhotosLibraryImage.h"
#import "_SFPBQuickLookThumbnailImage.h"
#import "_SFPBPointSize.h"
#import "_SFPBSymbolImage.h"
#import "_SFPBURLImage.h"

@interface _SFPBImage : PBCodable <_SFPBImage, NSSecureCoding>



@property (copy, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (retain, nonatomic) _SFPBAppIconImage *appIconImage; // ivar: _appIconImage
@property (retain, nonatomic) _SFPBCalendarImage *calendarImage; // ivar: _calendarImage
@property (retain, nonatomic) _SFPBContactImage *contactImage; // ivar: _contactImage
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (retain, nonatomic) _SFPBGraphicalFloat *cornerRadius; // ivar: _cornerRadius
@property (nonatomic) int cornerRoundingStyle; // ivar: _cornerRoundingStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy) NSData *imageData; // ivar: _imageData
@property (nonatomic) BOOL isTemplate; // ivar: _isTemplate
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *keyColor; // ivar: _keyColor
@property (retain, nonatomic) _SFPBLocalImage *localImage; // ivar: _localImage
@property (retain, nonatomic) _SFPBMediaArtworkImage *mediaArtworkImage; // ivar: _mediaArtworkImage
@property (retain, nonatomic) _SFPBMonogramImage *monogramImage; // ivar: _monogramImage
@property (retain, nonatomic) _SFPBPhotosLibraryImage *photosLibraryImage; // ivar: _photosLibraryImage
@property (retain, nonatomic) _SFPBQuickLookThumbnailImage *quickLookThumbnailImage; // ivar: _quickLookThumbnailImage
@property (retain, nonatomic) _SFPBGraphicalFloat *scale; // ivar: _scale
@property (nonatomic) BOOL shouldCropToCircle; // ivar: _shouldCropToCircle
@property (retain, nonatomic) _SFPBPointSize *size; // ivar: _size
@property (nonatomic) int source; // ivar: _source
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBSymbolImage *symbolImage; // ivar: _symbolImage
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) _SFPBURLImage *urlImage; // ivar: _urlImage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif