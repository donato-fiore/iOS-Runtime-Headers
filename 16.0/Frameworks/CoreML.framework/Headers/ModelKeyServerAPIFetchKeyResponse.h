// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MODELKEYSERVERAPIFETCHKEYRESPONSE_H
#define MODELKEYSERVERAPIFETCHKEYRESPONSE_H

@class PBCodable, NSString;
@protocol CKCodeOperationMessageMutation, NSCopying;


#import "ModelKeyServerAPIResultError.h"
#import "ModelKeyServerAPIFetchKeyResult.h"

@interface ModelKeyServerAPIFetchKeyResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ModelKeyServerAPIResultError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasResult;
@property (readonly, nonatomic) BOOL hasSuccess;
@property (readonly) NSUInteger hash;
@property (nonatomic) int result; // ivar: _result
@property (retain, nonatomic) ModelKeyServerAPIFetchKeyResult *success; // ivar: _success
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)resultAsString:(int)arg0 ;
-(int)StringAsResult:(id)arg0 ;
-(void)clearOneofValuesForResult;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif