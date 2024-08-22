// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSCHATSUGGESTMESSAGE_H
#define BCSCHATSUGGESTMESSAGE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BCSChatSuggestMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSString *bizId; // ivar: _bizId
@property (retain, nonatomic) NSMutableArray *callToActions; // ivar: _callToActions
@property (retain, nonatomic) NSMutableArray *chatOpenHours; // ivar: _chatOpenHours
@property (retain, nonatomic) NSString *group; // ivar: _group
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (readonly, nonatomic) BOOL hasBizId;
@property (readonly, nonatomic) BOOL hasGroup;
@property (readonly, nonatomic) BOOL hasIntentId;
@property (nonatomic) BOOL hasIsVerified;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasPhoneHash;
@property (readonly, nonatomic) BOOL hasSquareLogoUrl;
@property (readonly, nonatomic) BOOL hasTimeZone;
@property (readonly, nonatomic) BOOL hasTintColor;
@property (readonly, nonatomic) BOOL hasWideLogoUrl;
@property (retain, nonatomic) NSString *intentId; // ivar: _intentId
@property (nonatomic) BOOL isVerified; // ivar: _isVerified
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger phoneHash; // ivar: _phoneHash
@property (retain, nonatomic) NSMutableArray *phoneOpenHours; // ivar: _phoneOpenHours
@property (retain, nonatomic) NSString *squareLogoUrl; // ivar: _squareLogoUrl
@property (retain, nonatomic) NSString *timeZone; // ivar: _timeZone
@property (retain, nonatomic) NSString *tintColor; // ivar: _tintColor
@property (retain, nonatomic) NSMutableArray *visibilities; // ivar: _visibilities
@property (retain, nonatomic) NSString *wideLogoUrl; // ivar: _wideLogoUrl


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)callToActionsAtIndex:(NSUInteger)arg0 ;
-(id)chatOpenHoursAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)phoneOpenHoursAtIndex:(NSUInteger)arg0 ;
-(id)visibilitiesAtIndex:(NSUInteger)arg0 ;
-(void)addCallToActions:(id)arg0 ;
-(void)addChatOpenHours:(id)arg0 ;
-(void)addPhoneOpenHours:(id)arg0 ;
-(void)addVisibilities:(id)arg0 ;
-(void)clearCallToActions;
-(void)clearChatOpenHours;
-(void)clearPhoneOpenHours;
-(void)clearVisibilities;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif