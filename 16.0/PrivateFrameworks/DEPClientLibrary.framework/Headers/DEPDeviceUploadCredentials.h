// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEPDEVICEUPLOADCREDENTIALS_H
#define DEPDEVICEUPLOADCREDENTIALS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DEPDeviceUploadCredentials : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *dsToken; // ivar: _dsToken
@property (readonly, nonatomic) NSString *dsid; // ivar: _dsid


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDsid:(id)arg0 dsToken:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif