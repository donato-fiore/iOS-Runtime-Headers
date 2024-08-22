// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFTELEPHONYURLREQUEST_H
#define SFTELEPHONYURLREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFTelephonyURLRequest : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSString *failureNotificationName; // ivar: _failureNotificationName
@property (retain, nonatomic) NSString *successNotificationName; // ivar: _successNotificationName


-(id)initWithCompletionHandler:(id)arg0 ;


@end


#endif