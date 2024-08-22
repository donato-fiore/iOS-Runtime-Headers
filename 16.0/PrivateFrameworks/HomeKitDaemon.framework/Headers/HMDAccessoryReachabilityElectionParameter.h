// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYREACHABILITYELECTIONPARAMETER_H
#define HMDACCESSORYREACHABILITYELECTIONPARAMETER_H

@class HMFObject, NSDictionary, NSUUID;



@interface HMDAccessoryReachabilityElectionParameter : HMFObject

@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, getter=isReachable) BOOL reachable; // ivar: _reachable


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 isReachable:(BOOL)arg1 ;


@end


#endif