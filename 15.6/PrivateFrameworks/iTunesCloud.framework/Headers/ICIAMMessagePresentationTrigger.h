// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICIAMMESSAGEPRESENTATIONTRIGGER_H
#define ICIAMMESSAGEPRESENTATIONTRIGGER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ICIAMMessagePresentationTrigger : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (nonatomic) BOOL hasKind;
@property (readonly, nonatomic) BOOL hasTriggerName;
@property (nonatomic) int kind; // ivar: _kind
@property (retain, nonatomic) NSString *triggerName; // ivar: _triggerName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)kindAsString:(int)arg0 ;
-(int)StringAsKind:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif