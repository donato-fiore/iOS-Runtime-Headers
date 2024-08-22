// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUOSRECOVERYPROGRESSEVENT_H
#define CUOSRECOVERYPROGRESSEVENT_H

@class NSString, NSDictionary, NSError;

#import <Foundation/Foundation.h>


@interface CUOSRecoveryProgressEvent : NSObject

@property (copy, nonatomic) NSString *authenticationText; // ivar: _authenticationText
@property (readonly, copy, nonatomic) NSDictionary *configInfo; // ivar: _configInfo
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) int type; // ivar: _type




@end


#endif