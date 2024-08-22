// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREPBALERTREQUESTRESPONSE_H
#define WFREPBALERTREQUESTRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "WFREPBError.h"

@interface WFREPBAlertRequestResponse : PBCodable <NSCopying>



@property (retain, nonatomic) WFREPBError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasSelectedButton;
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (retain, nonatomic) NSString *selectedButton; // ivar: _selectedButton


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