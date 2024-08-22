// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBADDMEDIAINTENT_H
#define _INPBADDMEDIAINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBAddMediaIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBMediaDestination.h"
#import "_INPBMediaSearch.h"
#import "_INPBPrivateAddMediaIntentData.h"

@interface _INPBAddMediaIntent : PBCodable <_INPBAddMediaIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasMediaDestination;
@property (readonly, nonatomic) BOOL hasMediaSearch;
@property (readonly, nonatomic) BOOL hasPrivateAddMediaIntentData;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBMediaDestination *mediaDestination; // ivar: _mediaDestination
@property (copy, nonatomic) NSArray *mediaItems; // ivar: _mediaItems
@property (readonly, nonatomic) NSUInteger mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch; // ivar: _mediaSearch
@property (retain, nonatomic) _INPBPrivateAddMediaIntentData *privateAddMediaIntentData; // ivar: _privateAddMediaIntentData
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