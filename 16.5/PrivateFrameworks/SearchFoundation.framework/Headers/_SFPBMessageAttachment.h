// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBMESSAGEATTACHMENT_H
#define _SFPBMESSAGEATTACHMENT_H

@class PBCodable, NSString, NSData;
@protocol _SFPBMessageAttachment, NSSecureCoding;


#import "_SFPBPhotosLibraryImage.h"
#import "_SFPBURL.h"

@interface _SFPBMessageAttachment : PBCodable <_SFPBMessageAttachment, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *linkMetadata; // ivar: _linkMetadata
@property (retain, nonatomic) _SFPBPhotosLibraryImage *photosLibraryImage; // ivar: _photosLibraryImage
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) _SFPBURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif