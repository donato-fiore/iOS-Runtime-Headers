// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSCARRIERLINKRESULT_H
#define AMSCARRIERLINKRESULT_H

@class NSString, NSError, NSDictionary, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSCarrierLinkParams.h"

@interface AMSCarrierLinkResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *channelCustomerId; // ivar: _channelCustomerId
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) AMSCarrierLinkParams *linkParams; // ivar: _linkParams
@property (readonly, nonatomic) NSString *productCode; // ivar: _productCode
@property (readonly, nonatomic) NSDictionary *response; // ivar: _response
@property (readonly, nonatomic) NSNumber *statusCode; // ivar: _statusCode


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponse:(id)arg0 linkParams:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif