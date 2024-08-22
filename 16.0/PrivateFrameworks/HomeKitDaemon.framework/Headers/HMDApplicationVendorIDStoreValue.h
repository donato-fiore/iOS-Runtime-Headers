// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLICATIONVENDORIDSTOREVALUE_H
#define HMDAPPLICATIONVENDORIDSTOREVALUE_H

@class HMFObject, NSString, NSData;
@protocol NSSecureCoding;



@interface HMDApplicationVendorIDStoreValue : HMFObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *applicationBundleId; // ivar: _applicationBundleId
@property (readonly, nonatomic) NSString *companionAppBundleId; // ivar: _companionAppBundleId
@property (readonly, nonatomic) BOOL spiClient; // ivar: _spiClient
@property (readonly, nonatomic) NSData *vendorIdSha1; // ivar: _vendorIdSha1


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVendorIDSha1:(id)arg0 applicationBundleId:(id)arg1 companionAppBundleId:(id)arg2 spiClient:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif