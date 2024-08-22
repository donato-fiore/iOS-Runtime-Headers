// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBJSRESPONSE_H
#define AMSUIWEBJSRESPONSE_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSUIWebJSRequest.h"

@interface AMSUIWebJSResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *body; // ivar: _body
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) AMSUIWebJSRequest *originalRequest; // ivar: _originalRequest


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequest:(id)arg0 duration:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif