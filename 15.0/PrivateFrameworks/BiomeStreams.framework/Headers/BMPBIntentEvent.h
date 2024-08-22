// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBINTENTEVENT_H
#define BMPBINTENTEVENT_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface BMPBIntentEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) BOOL donatedBySiri; // ivar: _donatedBySiri
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (nonatomic) BOOL hasDonatedBySiri;
@property (readonly, nonatomic) BOOL hasIntentClass;
@property (nonatomic) BOOL hasIntentHandlingStatus;
@property (nonatomic) BOOL hasIntentType;
@property (readonly, nonatomic) BOOL hasIntentVerb;
@property (readonly, nonatomic) BOOL hasInteraction;
@property (nonatomic) BOOL hasInteractionDirection;
@property (readonly, nonatomic) BOOL hasItemID;
@property (readonly, nonatomic) BOOL hasSourceId;
@property (retain, nonatomic) NSString *intentClass; // ivar: _intentClass
@property (nonatomic) int intentHandlingStatus; // ivar: _intentHandlingStatus
@property (nonatomic) int intentType; // ivar: _intentType
@property (retain, nonatomic) NSString *intentVerb; // ivar: _intentVerb
@property (retain, nonatomic) NSData *interaction; // ivar: _interaction
@property (nonatomic) int interactionDirection; // ivar: _interactionDirection
@property (retain, nonatomic) NSString *itemID; // ivar: _itemID
@property (retain, nonatomic) NSString *sourceId; // ivar: _sourceId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)intentHandlingStatusAsString:(int)arg0 ;
-(id)intentTypeAsString:(int)arg0 ;
-(id)interactionDirectionAsString:(int)arg0 ;
-(int)StringAsIntentHandlingStatus:(id)arg0 ;
-(int)StringAsIntentType:(id)arg0 ;
-(int)StringAsInteractionDirection:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif