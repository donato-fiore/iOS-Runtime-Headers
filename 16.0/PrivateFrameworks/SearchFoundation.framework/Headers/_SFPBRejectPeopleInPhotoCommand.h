// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBREJECTPEOPLEINPHOTOCOMMAND_H
#define _SFPBREJECTPEOPLEINPHOTOCOMMAND_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBRejectPeopleInPhotoCommand, NSSecureCoding;


#import "_SFPBPhotosLibraryImage.h"

@interface _SFPBRejectPeopleInPhotoCommand : PBCodable <_SFPBRejectPeopleInPhotoCommand, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBPhotosLibraryImage *photosLibraryImage; // ivar: _photosLibraryImage
@property (copy, nonatomic) NSArray *rejectedPeoples; // ivar: _rejectedPeoples
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)rejectedPeopleCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)rejectedPeopleAtIndex:(NSUInteger)arg0 ;
-(void)addRejectedPeople:(id)arg0 ;
-(void)clearRejectedPeople;
-(void)setRejectedPeople:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif