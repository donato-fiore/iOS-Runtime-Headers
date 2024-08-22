// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKPRESPONSEOPERATIONRESULTERRORCLIENT_H
#define FCCKPRESPONSEOPERATIONRESULTERRORCLIENT_H

@class PBCodable;
@protocol NSCopying;


#import "FCCKPOplockFailure.h"
#import "FCCKPUniqueFieldFailure.h"

@interface FCCKPResponseOperationResultErrorClient : PBCodable <NSCopying>

 {
    FCCKPOplockFailure *_oplockFailure;
    int _type;
    FCCKPUniqueFieldFailure *_uniqueFieldFailure;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif