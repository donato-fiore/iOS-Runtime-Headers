// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSBIOMETRICSSIGNATURERESULT_H
#define AMSBIOMETRICSSIGNATURERESULT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSBiometricsSignatureRequest.h"

@interface AMSBiometricsSignatureResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) AMSBiometricsSignatureRequest *originalRequest; // ivar: _originalRequest
@property (retain, nonatomic) NSString *signature; // ivar: _signature


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif