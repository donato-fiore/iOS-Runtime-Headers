// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMODEASSERTIONINVALIDATIONREQUEST_H
#define DNDSMODEASSERTIONINVALIDATIONREQUEST_H

@class NSUUID, NSString, DNDModeAssertionInvalidationDetails, NSDate, DNDModeAssertionSource;
@protocol DNDSModernAssertionSourceResolution, NSCopying;

#import <Foundation/Foundation.h>

#import "DNDSModeAssertionInvalidationPredicate.h"

@interface DNDSModeAssertionInvalidationRequest : NSObject <DNDSModernAssertionSourceResolution, NSCopying>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) DNDModeAssertionInvalidationDetails *details; // ivar: _details
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) DNDSModeAssertionInvalidationPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSUInteger reasonOverride; // ivar: _reasonOverride
@property (readonly, copy, nonatomic) NSDate *requestDate; // ivar: _requestDate
@property (readonly, copy, nonatomic) DNDModeAssertionSource *source; // ivar: _source
@property (readonly) Class superclass;


+(id)requestWithPredicate:(id)arg0 requestDate:(id)arg1 details:(id)arg2 source:(id)arg3 reason:(NSUInteger)arg4 reasonOverride:(NSUInteger)arg5 ;
+(id)requestWithPredicate:(id)arg0 requestDate:(id)arg1 source:(id)arg2 reason:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUUID:(id)arg0 predicate:(id)arg1 requestDate:(id)arg2 details:(id)arg3 source:(id)arg4 reason:(NSUInteger)arg5 reasonOverride:(NSUInteger)arg6 ;
-(id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg0 localDeviceIdentifier:(id)arg1 remoteDeviceIdentifier:(id)arg2 ;


@end


#endif