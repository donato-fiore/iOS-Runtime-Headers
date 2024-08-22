// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINPAIRING_H
#define CHIPPLUGINPAIRING_H

@class HMFObject, NSNumber, NSString, NSData;
@protocol NSCopying;



@interface CHIPPluginPairing : HMFObject <NSCopying>



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
-(id)initWithCHIPFabricDescriptor:(id)arg0 ;
-(id)initWithFabricID:(id)arg0 fabricIndex:(id)arg1 nodeID:(id)arg2 vendorID:(id)arg3 vendorName:(id)arg4 fabricLabel:(id)arg5 ;
-(id)initWithFabricID:(id)arg0 nodeID:(id)arg1 vendorID:(id)arg2 fabricLabel:(id)arg3 ;
-(id)initWithFabricID:(id)arg0 nodeID:(id)arg1 vendorID:(id)arg2 vendorName:(id)arg3 fabricLabel:(id)arg4 ;
-(id)initWithNodeID:(id)arg0 fabricID:(id)arg1 fabricIndex:(id)arg2 fabricLabel:(id)arg3 rootPublicKey:(id)arg4 vendorID:(id)arg5 vendorName:(id)arg6 ;
-(id)vendorNameForVendorID:(id)arg0 ;


@end


#endif