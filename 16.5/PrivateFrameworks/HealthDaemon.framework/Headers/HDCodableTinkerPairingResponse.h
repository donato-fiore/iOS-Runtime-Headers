// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLETINKERPAIRINGRESPONSE_H
#define HDCODABLETINKERPAIRINGRESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HDCodableError.h"
#import "HDCodableSharingSetupMetadata.h"

@interface HDCodableTinkerPairingResponse : PBCodable <NSCopying>



@property (retain, nonatomic) HDCodableError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (readonly, nonatomic) BOOL hasSetupMetadata;
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (retain, nonatomic) HDCodableSharingSetupMetadata *setupMetadata; // ivar: _setupMetadata


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