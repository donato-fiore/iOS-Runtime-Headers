// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPBDGSREQUEST_H
#define ICPBDGSREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "ICPBDGSFinishDelegationRequest.h"
#import "ICPBDGSStartDelegationRequest.h"

@interface ICPBDGSRequest : PBRequest <NSCopying>

 {
    ICPBDGSFinishDelegationRequest *_finishDelegationRequest;
    ICPBDGSStartDelegationRequest *_startDelegationRequest;
    unsigned int _uniqueID;
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