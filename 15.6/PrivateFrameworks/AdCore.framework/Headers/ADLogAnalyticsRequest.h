// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADLOGANALYTICSREQUEST_H
#define ADLOGANALYTICSREQUEST_H

@class PBRequest, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface ADLogAnalyticsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSData *contentiAdID; // ivar: _contentiAdID
@property (retain, nonatomic) NSData *dPID; // ivar: _dPID
@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (readonly, nonatomic) BOOL hasBundleID;
@property (readonly, nonatomic) BOOL hasContentiAdID;
@property (readonly, nonatomic) BOOL hasDPID;
@property (readonly, nonatomic) BOOL hasIAdID;
@property (retain, nonatomic) NSData *iAdID; // ivar: _iAdID


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventsAtIndex:(NSUInteger)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)clearEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif