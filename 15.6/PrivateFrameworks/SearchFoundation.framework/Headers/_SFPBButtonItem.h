// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBBUTTONITEM_H
#define _SFPBBUTTONITEM_H

@class PBCodable, NSString, NSData;
@protocol _SFPBButtonItem, NSSecureCoding;


#import "_SFPBCommandButtonItem.h"
#import "_SFPBContactButtonItem.h"
#import "_SFPBCoreSpotlightButtonItem.h"
#import "_SFPBWatchListButtonItem.h"

@interface _SFPBButtonItem : PBCodable <_SFPBButtonItem, NSSecureCoding>



@property (retain, nonatomic) _SFPBCommandButtonItem *commandButtonItem; // ivar: _commandButtonItem
@property (retain, nonatomic) _SFPBContactButtonItem *contactButtonItem; // ivar: _contactButtonItem
@property (retain, nonatomic) _SFPBCoreSpotlightButtonItem *coreSpotlightButtonItem; // ivar: _coreSpotlightButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger uniqueId; // ivar: _uniqueId
@property (retain, nonatomic) _SFPBWatchListButtonItem *watchListButtonItem; // ivar: _watchListButtonItem
@property (readonly, nonatomic) NSUInteger whichValue; // ivar: _whichValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif