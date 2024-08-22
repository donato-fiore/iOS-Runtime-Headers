// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPROTORADIOCONTENTREFERENCE_H
#define _MPCPROTORADIOCONTENTREFERENCE_H

@class PBCodable;
@protocol NSCopying;


#import "_MPCProtoRadioContentReferenceLibraryAlbumContentReference.h"
#import "_MPCProtoRadioContentReferenceLibraryArtistContentReference.h"
#import "_MPCProtoRadioContentReferenceLibraryItemContentReference.h"
#import "_MPCProtoRadioContentReferenceStoreContentReference.h"

@interface _MPCProtoRadioContentReference : PBCodable <NSCopying>

 {
    _MPCProtoRadioContentReferenceLibraryAlbumContentReference *_libraryAlbumContentReference;
    _MPCProtoRadioContentReferenceLibraryArtistContentReference *_libraryArtistContentReference;
    _MPCProtoRadioContentReferenceLibraryItemContentReference *_libraryItemContentReference;
    _MPCProtoRadioContentReferenceStoreContentReference *_storeContentReference;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif