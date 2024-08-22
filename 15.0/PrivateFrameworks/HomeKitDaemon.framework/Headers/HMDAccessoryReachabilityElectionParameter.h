// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYREACHABILITYELECTIONPARAMETER_H
#define HMDACCESSORYREACHABILITYELECTIONPARAMETER_H

@class HMFObject, NSUUID;



@interface HMDAccessoryReachabilityElectionParameter : HMFObject

@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, getter=isReachable) BOOL reachable; // ivar: _reachable


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif