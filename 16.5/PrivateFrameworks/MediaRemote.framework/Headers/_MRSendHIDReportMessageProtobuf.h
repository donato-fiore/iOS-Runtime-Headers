// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRSENDHIDREPORTMESSAGEPROTOBUF_H
#define _MRSENDHIDREPORTMESSAGEPROTOBUF_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface _MRSendHIDReportMessageProtobuf : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasReport;
@property (readonly, nonatomic) BOOL hasVirtualDeviceID;
@property (retain, nonatomic) NSData *report; // ivar: _report
@property (retain, nonatomic) NSString *virtualDeviceID; // ivar: _virtualDeviceID


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