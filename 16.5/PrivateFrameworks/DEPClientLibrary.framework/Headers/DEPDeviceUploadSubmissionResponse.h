// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEPDEVICEUPLOADSUBMISSIONRESPONSE_H
#define DEPDEVICEUPLOADSUBMISSIONRESPONSE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DEPDeviceUploadSubmissionResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly, nonatomic) NSString *requestId; // ivar: _requestId
@property (readonly, nonatomic) NSString *requestStatus; // ivar: _requestStatus


+(BOOL)supportsSecureCoding;
-(id)_devicesFromDeviceArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif