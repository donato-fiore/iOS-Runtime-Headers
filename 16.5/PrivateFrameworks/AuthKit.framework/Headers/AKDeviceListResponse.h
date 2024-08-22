// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKDEVICELISTRESPONSE_H
#define AKDEVICELISTRESPONSE_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKDeviceListResponse : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSArray *deviceList; // ivar: _deviceList
@property (copy, nonatomic) NSString *deviceListVersion; // ivar: _deviceListVersion


+(BOOL)supportsSecureCoding;
+(id)deviceMapFromResponseBody:(id)arg0 ;
-(id)_parseDevicesFromResponseBody:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseBody:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif