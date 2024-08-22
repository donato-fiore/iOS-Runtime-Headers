// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICIAMAPPLICATIONMESSAGESYNCCOMMAND_H
#define ICIAMAPPLICATIONMESSAGESYNCCOMMAND_H

@class PBCodable;
@protocol NSCopying;


#import "ICIAMApplicationMessage.h"

@interface ICIAMApplicationMessageSyncCommand : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ICIAMApplicationMessage *applicationMessage; // ivar: _applicationMessage
@property (nonatomic) NSInteger commandSerialNumber; // ivar: _commandSerialNumber
@property (nonatomic) int commandType; // ivar: _commandType
@property (readonly, nonatomic) BOOL hasApplicationMessage;
@property (nonatomic) BOOL hasCommandSerialNumber;
@property (nonatomic) BOOL hasCommandType;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)commandTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCommandType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif