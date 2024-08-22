// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEPDEVICEUPLOADREQUESTTYPE_H
#define DEPDEVICEUPLOADREQUESTTYPE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DEPDeviceUploadRequestType : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *code; // ivar: _code
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)initWithCode:(id)arg0 name:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif