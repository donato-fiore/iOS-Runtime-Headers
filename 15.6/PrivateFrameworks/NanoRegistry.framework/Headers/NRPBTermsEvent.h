// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRPBTERMSEVENT_H
#define NRPBTERMSEVENT_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NRPBTermsEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *acknowledgedDeviceName; // ivar: _acknowledgedDeviceName
@property (retain, nonatomic) NSString *acknowledgedDeviceSerialNumber; // ivar: _acknowledgedDeviceSerialNumber
@property (retain, nonatomic) NSString *displayDeviceName; // ivar: _displayDeviceName
@property (retain, nonatomic) NSString *displayDeviceSerialNumber; // ivar: _displayDeviceSerialNumber
@property (retain, nonatomic) NSString *documentationID; // ivar: _documentationID
@property (nonatomic) CGFloat eventDate; // ivar: _eventDate
@property (nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) BOOL hasAcknowledgedDeviceName;
@property (readonly, nonatomic) BOOL hasAcknowledgedDeviceSerialNumber;
@property (readonly, nonatomic) BOOL hasDisplayDeviceName;
@property (readonly, nonatomic) BOOL hasDisplayDeviceSerialNumber;
@property (readonly, nonatomic) BOOL hasDocumentationID;
@property (nonatomic) BOOL hasEventDate;
@property (nonatomic) BOOL hasEventType;
@property (readonly, nonatomic) BOOL hasLoggingProcessName;
@property (nonatomic) BOOL hasPresentationLocation;
@property (readonly, nonatomic) BOOL hasPresentationReason;
@property (readonly, nonatomic) BOOL hasTermsText;
@property (retain, nonatomic) NSString *loggingProcessName; // ivar: _loggingProcessName
@property (nonatomic) int presentationLocation; // ivar: _presentationLocation
@property (retain, nonatomic) NSString *presentationReason; // ivar: _presentationReason
@property (retain, nonatomic) NSData *termsText; // ivar: _termsText


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