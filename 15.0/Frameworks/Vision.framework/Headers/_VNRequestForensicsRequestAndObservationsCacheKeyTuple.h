// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _VNREQUESTFORENSICSREQUESTANDOBSERVATIONSCACHEKEYTUPLE_H
#define _VNREQUESTFORENSICSREQUESTANDOBSERVATIONSCACHEKEYTUPLE_H

@protocol NSObject><NSCopying;

#import <Foundation/Foundation.h>

#import "VNRequest.h"

@interface _VNRequestForensicsRequestAndObservationsCacheKeyTuple : NSObject

@property (readonly, nonatomic) NSObject<NSObject><NSCopying> *observationsCacheKey; // ivar: _observationsCacheKey
@property (readonly, nonatomic) VNRequest *request; // ivar: _request


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRequest:(id)arg0 observationsCacheKey:(id)arg1 ;


@end


#endif