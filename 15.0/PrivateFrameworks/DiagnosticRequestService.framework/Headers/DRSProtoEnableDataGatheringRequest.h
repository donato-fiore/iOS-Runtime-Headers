// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSPROTOENABLEDATAGATHERINGREQUEST_H
#define DRSPROTOENABLEDATAGATHERINGREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "DRSProtoRequestDescription.h"

@interface DRSProtoEnableDataGatheringRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsContinue;
@property (readonly, nonatomic) BOOL hasLogType;
@property (readonly, nonatomic) BOOL hasRequestDescription;
@property (nonatomic) BOOL isContinue; // ivar: _isContinue
@property (retain, nonatomic) NSString *logType; // ivar: _logType
@property (retain, nonatomic) DRSProtoRequestDescription *requestDescription; // ivar: _requestDescription


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