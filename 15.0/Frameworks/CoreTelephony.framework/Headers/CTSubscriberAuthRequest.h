// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTSUBSCRIBERAUTHREQUEST_H
#define CTSUBSCRIBERAUTHREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTSubscriberAlgorithm.h"

@interface CTSubscriberAuthRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) CTSubscriberAlgorithm *algorithm; // ivar: _algorithm


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif