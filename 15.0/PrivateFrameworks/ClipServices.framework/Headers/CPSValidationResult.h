// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSVALIDATIONRESULT_H
#define CPSVALIDATIONRESULT_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPSValidationRequest.h"

@interface CPSValidationResult : NSObject <NSSecureCoding>

 {
    NSDictionary *_response;
}


@property (readonly, nonatomic) NSDictionary *availabilities;
@property (readonly, nonatomic) CPSValidationRequest *request; // ivar: _request


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequest:(id)arg0 response:(id)arg1 ;
-(id)validBundleIDForURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif