// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSAGEVERIFICATIONREQUIREDRESULT_H
#define AMSAGEVERIFICATIONREQUIREDRESULT_H


#import <Foundation/Foundation.h>


@interface AMSAgeVerificationRequiredResult : NSObject

@property BOOL isVerificationRequired; // ivar: _isVerificationRequired
@property NSUInteger requiredType; // ivar: _requiredType


-(id)initWithRequiredType:(NSUInteger)arg0 ;


@end


#endif