// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCMODELGENERICAVITEMTIMEDMETADATAREQUEST_H
#define MPCMODELGENERICAVITEMTIMEDMETADATAREQUEST_H

@class MPModelRequest, MPModelGenericObject, ICStoreRequestContext, NSArray;


#import "MPCModelGenericAVItemTimedMetadataResponse.h"

@interface MPCModelGenericAVItemTimedMetadataRequest : MPModelRequest

@property (readonly, nonatomic) MPModelGenericObject *genericObject; // ivar: _genericObject
@property (retain, nonatomic) MPCModelGenericAVItemTimedMetadataResponse *previousResponse; // ivar: _previousResponse
@property (readonly, copy, nonatomic) ICStoreRequestContext *storeRequestContext; // ivar: _storeRequestContext
@property (readonly, copy, nonatomic) NSArray *timedMetadataGroups; // ivar: _timedMetadataGroups


+(BOOL)supportsSecureCoding;
+(id)metadataIdentifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithGenericObject:(id)arg0 timedMetadataGroups:(id)arg1 storeRequestContext:(id)arg2 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif