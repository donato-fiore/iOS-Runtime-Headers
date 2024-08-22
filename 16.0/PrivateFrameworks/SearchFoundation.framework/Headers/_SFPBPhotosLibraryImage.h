// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBPHOTOSLIBRARYIMAGE_H
#define _SFPBPHOTOSLIBRARYIMAGE_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBPhotosLibraryImage, NSSecureCoding;



@interface _SFPBPhotosLibraryImage : PBCodable <_SFPBPhotosLibraryImage, NSSecureCoding>



@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSyndicated; // ivar: _isSyndicated
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *peopleInPhotos; // ivar: _peopleInPhotos
@property (copy, nonatomic) NSString *photoIdentifier; // ivar: _photoIdentifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)peopleInPhotoCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)peopleInPhotoAtIndex:(NSUInteger)arg0 ;
-(void)addPeopleInPhoto:(id)arg0 ;
-(void)clearPeopleInPhoto;
-(void)setPeopleInPhoto:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif