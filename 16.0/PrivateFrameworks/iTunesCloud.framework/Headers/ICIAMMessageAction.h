// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICIAMMESSAGEACTION_H
#define ICIAMMESSAGEACTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "ICIAMMetricEvent.h"

@interface ICIAMMessageAction : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *actionParameters; // ivar: _actionParameters
@property (retain, nonatomic) ICIAMMetricEvent *clickEvent; // ivar: _clickEvent
@property (retain, nonatomic) NSString *displayText; // ivar: _displayText
@property (readonly, nonatomic) BOOL hasClickEvent;
@property (readonly, nonatomic) BOOL hasDisplayText;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasMessageRemovalPolicy;
@property (nonatomic) BOOL hasRequiresDelegate;
@property (readonly, nonatomic) BOOL hasURL;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int messageRemovalPolicy; // ivar: _messageRemovalPolicy
@property (nonatomic) BOOL requiresDelegate; // ivar: _requiresDelegate
@property (retain, nonatomic) NSString *uRL; // ivar: _uRL


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionParametersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)messageRemovalPolicyAsString:(int)arg0 ;
-(int)StringAsMessageRemovalPolicy:(id)arg0 ;
-(void)addActionParameters:(id)arg0 ;
-(void)clearActionParameters;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif