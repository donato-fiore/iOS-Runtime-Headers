// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEPDEVICEUPLOADUSER_H
#define DEPDEVICEUPLOADUSER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DEPDeviceUploadUser : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *dsid; // ivar: _dsid
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)initWithApproverDict:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDsid:(id)arg0 name:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif