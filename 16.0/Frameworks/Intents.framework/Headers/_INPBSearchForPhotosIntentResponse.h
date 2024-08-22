// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSEARCHFORPHOTOSINTENTRESPONSE_H
#define _INPBSEARCHFORPHOTOSINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBSearchForPhotosIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBLocation.h"

@interface _INPBSearchForPhotosIntentResponse : PBCodable <_INPBSearchForPhotosIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *albumName; // ivar: _albumName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (readonly, nonatomic) BOOL hasLocationCreated;
@property (nonatomic) BOOL hasSearchResultsCount;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBLocation *locationCreated; // ivar: _locationCreated
@property (nonatomic) int searchResultsCount; // ivar: _searchResultsCount
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif