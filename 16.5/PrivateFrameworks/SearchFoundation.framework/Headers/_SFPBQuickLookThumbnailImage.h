// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBQUICKLOOKTHUMBNAILIMAGE_H
#define _SFPBQUICKLOOKTHUMBNAILIMAGE_H

@class PBCodable, NSString, NSData;
@protocol _SFPBQuickLookThumbnailImage, NSSecureCoding;


#import "_SFPBURL.h"

@interface _SFPBQuickLookThumbnailImage : PBCodable <_SFPBQuickLookThumbnailImage, NSSecureCoding>



@property (copy, nonatomic) NSString *coreSpotlightIdentifier; // ivar: _coreSpotlightIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _SFPBURL *filePath; // ivar: _filePath
@property (copy, nonatomic) NSString *fileProviderIdentifier; // ivar: _fileProviderIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif