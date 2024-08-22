// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEPDEVICEUPLOADDEVICEDETAILS_H
#define DEPDEVICEUPLOADDEVICEDETAILS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DEPDeviceUploadDeviceDetails : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *deviceUploadStatus; // ivar: _deviceUploadStatus
@property (readonly, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly, nonatomic) NSString *serialNumber; // ivar: _serialNumber


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif