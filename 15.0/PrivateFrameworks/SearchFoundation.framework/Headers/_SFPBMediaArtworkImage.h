// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBMEDIAARTWORKIMAGE_H
#define _SFPBMEDIAARTWORKIMAGE_H

@class PBCodable, NSString, NSData;
@protocol _SFPBMediaArtworkImage, NSSecureCoding;



@interface _SFPBMediaArtworkImage : PBCodable <_SFPBMediaArtworkImage, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mediaEntityType; // ivar: _mediaEntityType
@property (copy, nonatomic) NSString *persistentID; // ivar: _persistentID
@property (copy, nonatomic) NSString *spotlightIdentifier; // ivar: _spotlightIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *universalLibraryID; // ivar: _universalLibraryID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif