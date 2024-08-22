// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBWATCHLISTBUTTONITEM_H
#define _SFPBWATCHLISTBUTTONITEM_H

@class PBCodable, NSString, NSData;
@protocol _SFPBWatchListButtonItem, NSSecureCoding;


#import "_SFPBWatchListItem.h"

@interface _SFPBWatchListButtonItem : PBCodable <_SFPBWatchListButtonItem, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger uniqueId; // ivar: _uniqueId
@property (retain, nonatomic) _SFPBWatchListItem *watchListItem; // ivar: _watchListItem


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif