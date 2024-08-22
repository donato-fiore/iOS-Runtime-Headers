// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPBCONTACTMODEENTITYMETRICS_H
#define ATXPBCONTACTMODEENTITYMETRICS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBContactModeEntityMetrics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *activityState; // ivar: _activityState
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) BOOL hasActivityState;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasNumUniqueIncomingInteractionSenders;
@property (nonatomic) BOOL hasNumUniqueOutgoingInteractionRecipients;
@property (nonatomic) unsigned int numUniqueIncomingInteractionSenders; // ivar: _numUniqueIncomingInteractionSenders
@property (nonatomic) unsigned int numUniqueOutgoingInteractionRecipients; // ivar: _numUniqueOutgoingInteractionRecipients


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif