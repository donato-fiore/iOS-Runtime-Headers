// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBUPDATEMEDIAAFFINITYINTENT_H
#define _INPBUPDATEMEDIAAFFINITYINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBUpdateMediaAffinityIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBMediaSearch.h"
#import "_INPBPrivateUpdateMediaAffinityIntentData.h"

@interface _INPBUpdateMediaAffinityIntent : PBCodable <_INPBUpdateMediaAffinityIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int affinityType; // ivar: _affinityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAffinityType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasMediaSearch;
@property (readonly, nonatomic) BOOL hasPrivateUpdateMediaAffinityIntentData;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (copy, nonatomic) NSArray *mediaItems; // ivar: _mediaItems
@property (readonly, nonatomic) NSUInteger mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch; // ivar: _mediaSearch
@property (retain, nonatomic) _INPBPrivateUpdateMediaAffinityIntentData *privateUpdateMediaAffinityIntentData; // ivar: _privateUpdateMediaAffinityIntentData
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)affinityTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)mediaItemsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAffinityType:(id)arg0 ;
-(void)addMediaItems:(id)arg0 ;
-(void)clearMediaItems;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif