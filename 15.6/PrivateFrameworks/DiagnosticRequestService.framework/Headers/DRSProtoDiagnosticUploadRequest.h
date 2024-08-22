// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSPROTODIAGNOSTICUPLOADREQUEST_H
#define DRSPROTODIAGNOSTICUPLOADREQUEST_H

@class PBRequest, NSString, NSMutableArray;
@protocol NSCopying;


#import "DRSProtoRequestDescription.h"

@interface DRSProtoDiagnosticUploadRequest : PBRequest <NSCopying>



@property (readonly, nonatomic) BOOL hasIssueDescription;
@property (readonly, nonatomic) BOOL hasRequestDescription;
@property (retain, nonatomic) NSString *issueDescription; // ivar: _issueDescription
@property (retain, nonatomic) NSMutableArray *logs; // ivar: _logs
@property (retain, nonatomic) DRSProtoRequestDescription *requestDescription; // ivar: _requestDescription


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)logsAtIndex:(NSUInteger)arg0 ;
-(void)addLogs:(id)arg0 ;
-(void)clearLogs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif