// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBJSREQUEST_H
#define AMSUIWEBJSREQUEST_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSUIWebJSRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) NSString *service; // ivar: _service


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 logKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif