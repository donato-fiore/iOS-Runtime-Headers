// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBSCREENTIMEREQUESTEVENT_H
#define BMPBSCREENTIMEREQUESTEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBScreenTimeRequestEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int approvalTime; // ivar: _approvalTime
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) CGFloat eventTime; // ivar: _eventTime
@property (nonatomic) BOOL hasApprovalTime;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (nonatomic) BOOL hasEventTime;
@property (nonatomic) BOOL hasKind;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (readonly, nonatomic) BOOL hasRequesterDSID;
@property (readonly, nonatomic) BOOL hasResponderDSID;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasWebsitePath;
@property (nonatomic) int kind; // ivar: _kind
@property (retain, nonatomic) NSString *requestID; // ivar: _requestID
@property (retain, nonatomic) NSString *requesterDSID; // ivar: _requesterDSID
@property (retain, nonatomic) NSString *responderDSID; // ivar: _responderDSID
@property (nonatomic) int status; // ivar: _status
@property (retain, nonatomic) NSString *websitePath; // ivar: _websitePath


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)approvalTimeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)kindAsString:(int)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsApprovalTime:(id)arg0 ;
-(int)StringAsKind:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif