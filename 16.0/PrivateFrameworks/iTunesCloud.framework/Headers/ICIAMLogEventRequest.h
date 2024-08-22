// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICIAMLOGEVENTREQUEST_H
#define ICIAMLOGEVENTREQUEST_H

@class PBRequest, NSString, NSMutableArray;
@protocol NSCopying;



@interface ICIAMLogEventRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *applicationMessageIdentifier; // ivar: _applicationMessageIdentifier
@property (nonatomic) NSInteger dSID; // ivar: _dSID
@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (retain, nonatomic) NSMutableArray *eventParameters; // ivar: _eventParameters
@property (readonly, nonatomic) BOOL hasApplicationMessageIdentifier;
@property (nonatomic) BOOL hasDSID;
@property (readonly, nonatomic) BOOL hasDeviceID;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventParametersAtIndex:(NSUInteger)arg0 ;
-(void)addEventParameters:(id)arg0 ;
-(void)clearEventParameters;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif