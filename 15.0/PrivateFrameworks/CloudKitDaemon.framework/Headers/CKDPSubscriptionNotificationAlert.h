// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPSUBSCRIPTIONNOTIFICATIONALERT_H
#define CKDPSUBSCRIPTIONNOTIFICATIONALERT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *actionLocKey; // ivar: _actionLocKey
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL hasActionLocKey;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasLaunchImage;
@property (readonly, nonatomic) BOOL hasLocalizedKey;
@property (readonly, nonatomic) BOOL hasSoundName;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasSubtitleLocalizedKey;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasTitleLocalizedKey;
@property (retain, nonatomic) NSString *launchImage; // ivar: _launchImage
@property (retain, nonatomic) NSMutableArray *localizedArguments; // ivar: _localizedArguments
@property (retain, nonatomic) NSString *localizedKey; // ivar: _localizedKey
@property (retain, nonatomic) NSString *soundName; // ivar: _soundName
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSMutableArray *subtitleLocalizedArguments; // ivar: _subtitleLocalizedArguments
@property (retain, nonatomic) NSString *subtitleLocalizedKey; // ivar: _subtitleLocalizedKey
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSMutableArray *titleLocalizedArguments; // ivar: _titleLocalizedArguments
@property (retain, nonatomic) NSString *titleLocalizedKey; // ivar: _titleLocalizedKey


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)localizedArgumentsAtIndex:(NSUInteger)arg0 ;
-(id)subtitleLocalizedArgumentsAtIndex:(NSUInteger)arg0 ;
-(id)titleLocalizedArgumentsAtIndex:(NSUInteger)arg0 ;
-(void)addLocalizedArguments:(id)arg0 ;
-(void)addSubtitleLocalizedArguments:(id)arg0 ;
-(void)addTitleLocalizedArguments:(id)arg0 ;
-(void)clearLocalizedArguments;
-(void)clearTitleLocalizedArguments;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif