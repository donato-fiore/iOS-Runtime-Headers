// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRPAIRING_H
#define HMMTRPAIRING_H

@class HMFObject, NSNumber, NSString, NSData;
@protocol NSCopying;



@interface HMMTRPairing : HMFObject <NSCopying>



@property (readonly) NSNumber *fabricID; // ivar: _fabricID
@property (readonly) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (readonly, copy) NSString *fabricLabel; // ivar: _fabricLabel
@property (readonly) NSNumber *nodeID; // ivar: _nodeID
@property (readonly) NSData *rootPublicKey; // ivar: _rootPublicKey
@property (readonly) NSNumber *vendorID; // ivar: _vendorID
@property (readonly, copy) NSString *vendorName; // ivar: _vendorName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFabricDescriptor:(id)arg0 vendorName:(id)arg1 ;
-(id)initWithNodeID:(id)arg0 fabricID:(id)arg1 fabricIndex:(id)arg2 fabricLabel:(id)arg3 rootPublicKey:(id)arg4 vendorID:(id)arg5 vendorName:(id)arg6 ;


@end


#endif