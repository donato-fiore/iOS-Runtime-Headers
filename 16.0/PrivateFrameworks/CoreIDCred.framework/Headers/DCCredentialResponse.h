// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCCREDENTIALRESPONSE_H
#define DCCREDENTIALRESPONSE_H

@class NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCCredentialResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *elementsByNamespace; // ivar: _elementsByNamespace
@property (retain, nonatomic) NSData *responseData; // ivar: _responseData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseData:(id)arg0 elementsByNamespace:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif