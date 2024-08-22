// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINPAIRING_H
#define CHIPPLUGINPAIRING_H

@class HMFObject, NSNumber, NSString;
@protocol NSCopying;



@interface CHIPPluginPairing : HMFObject <NSCopying>



@property (readonly) NSNumber *fabricID; // ivar: _fabricID
@property (readonly, copy) NSString *fabricLabel; // ivar: _fabricLabel
@property (readonly) NSNumber *nodeID; // ivar: _nodeID
@property (readonly) NSNumber *vendorID; // ivar: _vendorID
@property (readonly, copy) NSString *vendorName; // ivar: _vendorName


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCHIPResponseDictionary:(id)arg0 ;
-(id)initWithFabricID:(id)arg0 nodeID:(id)arg1 vendorID:(id)arg2 fabricLabel:(id)arg3 ;
-(id)initWithFabricID:(id)arg0 nodeID:(id)arg1 vendorID:(id)arg2 vendorName:(id)arg3 fabricLabel:(id)arg4 ;
-(id)vendorNameForVendorID:(id)arg0 ;


@end


#endif