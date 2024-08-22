// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSESCHEMAPSECOMMONSIGNAL_H
#define PSESCHEMAPSECOMMONSIGNAL_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PSESchemaPSECommonSignal : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *action; // ivar: _action
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) CGFloat eventDonationTimeInSecondsSince2001; // ivar: _eventDonationTimeInSecondsSince2001
@property (nonatomic) BOOL hasAction; // ivar: _hasAction
@property (nonatomic) BOOL hasDomain; // ivar: _hasDomain
@property (nonatomic) BOOL hasEventDonationTimeInSecondsSince2001;
@property (nonatomic) BOOL hasHasUserInitiatedFollowup;
@property (nonatomic) BOOL hasIsDonatedBySiri;
@property (nonatomic) BOOL hasUserInitiatedFollowup; // ivar: _hasUserInitiatedFollowup
@property (nonatomic) int isDonatedBySiri; // ivar: _isDonatedBySiri
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAction;
-(void)deleteDomain;
-(void)deleteEventDonationTimeInSecondsSince2001;
-(void)deleteHasUserInitiatedFollowup;
-(void)deleteIsDonatedBySiri;
-(void)writeTo:(id)arg0 ;


@end


#endif