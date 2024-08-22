// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBWATCHLISTITEM_H
#define _SFPBWATCHLISTITEM_H

@class PBCodable, NSString, NSData;
@protocol _SFPBWatchListItem, NSSecureCoding;



@interface _SFPBWatchListItem : PBCodable <_SFPBWatchListItem, NSSecureCoding>



@property (copy, nonatomic) NSString *addToUpNextText; // ivar: _addToUpNextText
@property (copy, nonatomic) NSString *addedToUpNextText; // ivar: _addedToUpNextText
@property (copy, nonatomic) NSString *continueInTextFormat; // ivar: _continueInTextFormat
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *inUpNextText; // ivar: _inUpNextText
@property (copy, nonatomic) NSString *installButtonTitle; // ivar: _installButtonTitle
@property (nonatomic) BOOL isMediaContainer; // ivar: _isMediaContainer
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *openButtonTitle; // ivar: _openButtonTitle
@property (copy, nonatomic) NSString *purchaseOfferTextFormat; // ivar: _purchaseOfferTextFormat
@property (copy, nonatomic) NSString *seasonEpisodeTextFormat; // ivar: _seasonEpisodeTextFormat
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *watchListIdentifier; // ivar: _watchListIdentifier
@property (copy, nonatomic) NSString *watchLiveTextFormat; // ivar: _watchLiveTextFormat


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif