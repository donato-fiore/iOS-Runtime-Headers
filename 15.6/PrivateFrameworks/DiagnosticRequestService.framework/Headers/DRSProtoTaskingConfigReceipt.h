// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSPROTOTASKINGCONFIGRECEIPT_H
#define DRSPROTOTASKINGCONFIGRECEIPT_H

@class PBCodable, NSString;
@protocol CKCodeOperationMessageMutation, NSCopying;


#import "DRSProtoTaskingConfigMetadata.h"

@interface DRSProtoTaskingConfigReceipt : PBCodable <CKCodeOperationMessageMutation, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasReceiptResult;
@property (readonly, nonatomic) BOOL hasTaskingConfigMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *receiptResult; // ivar: _receiptResult
@property (readonly) Class superclass;
@property (retain, nonatomic) DRSProtoTaskingConfigMetadata *taskingConfigMetadata; // ivar: _taskingConfigMetadata


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif