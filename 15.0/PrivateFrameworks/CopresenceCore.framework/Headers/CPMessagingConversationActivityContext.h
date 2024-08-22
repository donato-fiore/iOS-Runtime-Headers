// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPMESSAGINGCONVERSATIONACTIVITYCONTEXT_H
#define CPMESSAGINGCONVERSATIONACTIVITYCONTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CPMessagingConversationActivityContext : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *actionDescription; // ivar: _actionDescription
@property (retain, nonatomic) NSString *completedDescription; // ivar: _completedDescription
@property (retain, nonatomic) NSString *contextIdentifier; // ivar: _contextIdentifier
@property (readonly, nonatomic) BOOL hasActionDescription;
@property (readonly, nonatomic) BOOL hasCompletedDescription;
@property (readonly, nonatomic) BOOL hasContextIdentifier;
@property (readonly, nonatomic) BOOL hasOngoingDescription;
@property (retain, nonatomic) NSString *ongoingDescription; // ivar: _ongoingDescription


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