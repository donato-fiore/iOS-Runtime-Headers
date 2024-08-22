// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFETCHEDCLOUDTABDEVICEORCLOSEREQUEST_H
#define WBSFETCHEDCLOUDTABDEVICEORCLOSEREQUEST_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSFetchedCloudTabDeviceOrCloseRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *deviceOrCloseRequestDictionary; // ivar: _deviceOrCloseRequestDictionary
@property (readonly, copy, nonatomic) NSString *uuidString; // ivar: _uuidString


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUIDString:(id)arg0 deviceOrCloseRequestDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif