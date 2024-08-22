// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSEARCHFORMEDIAINTENT_H
#define _INPBSEARCHFORMEDIAINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSearchForMediaIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBMediaSearch.h"
#import "_INPBPrivateSearchForMediaIntentData.h"

@interface _INPBSearchForMediaIntent : PBCodable <_INPBSearchForMediaIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasMediaSearch;
@property (readonly, nonatomic) BOOL hasPrivateSearchForMediaIntentData;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (copy, nonatomic) NSArray *mediaItems; // ivar: _mediaItems
@property (readonly, nonatomic) NSUInteger mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch; // ivar: _mediaSearch
@property (retain, nonatomic) _INPBPrivateSearchForMediaIntentData *privateSearchForMediaIntentData; // ivar: _privateSearchForMediaIntentData
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)mediaItemsAtIndex:(NSUInteger)arg0 ;
-(void)addMediaItems:(id)arg0 ;
-(void)clearMediaItems;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif