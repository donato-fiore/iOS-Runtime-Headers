// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLICATIONVENDORIDSTORE_H
#define HMDAPPLICATIONVENDORIDSTORE_H

@class HMFObject, NSMutableDictionary;
@protocol NSSecureCoding, OS_dispatch_queue;



@interface HMDApplicationVendorIDStore : HMFObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableDictionary *applicationMachUUIDMapping; // ivar: _applicationMachUUIDMapping
@property (readonly, nonatomic) NSMutableDictionary *applicationVendorIdMapping; // ivar: _applicationVendorIdMapping
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue


+(BOOL)supportsSecureCoding;
+(id)sharedStore;
-(BOOL)_addVendorID:(id)arg0 forApplication:(id)arg1 companionAppBundleId:(id)arg2 spiClient:(BOOL)arg3 ;
-(id)_machUUIDsForApplication:(id)arg0 ;
-(id)_vendorIDForApplication:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)machUUIDsForApplication:(id)arg0 ;
-(id)vendorIDForApplication:(id)arg0 ;
-(void)__handleUninstalledApplication:(id)arg0 ;
-(void)_extractVendorIDForApplication:(id)arg0 ;
-(void)_save;
-(void)_setAndSaveVendorID:(id)arg0 applicationBundleId:(id)arg1 companionAppBundleId:(id)arg2 spiClient:(BOOL)arg3 ;
-(void)addVendorID:(id)arg0 applicationBundleId:(id)arg1 ;
-(void)addVendorID:(id)arg0 applicationBundleId:(id)arg1 companionAppBundleId:(id)arg2 ;
-(void)addVendorID:(id)arg0 applicationBundleId:(id)arg1 spiClient:(BOOL)arg2 ;
-(void)checkCorrectness;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeVendorIDForApplicationBundleId:(id)arg0 ;


@end


#endif