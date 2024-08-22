// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREPBACECOMMANDREQUESTRESPONSE_H
#define WFREPBACECOMMANDREQUESTRESPONSE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "WFREPBError.h"

@interface WFREPBAceCommandRequestResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *aceCommandResponseData; // ivar: _aceCommandResponseData
@property (retain, nonatomic) WFREPBError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) NSString *originatingRequestIdentifier; // ivar: _originatingRequestIdentifier


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