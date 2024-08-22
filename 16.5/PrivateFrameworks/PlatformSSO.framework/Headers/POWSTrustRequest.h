// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTREQUEST_H
#define POWSTRUSTREQUEST_H

@class NSString, NSMutableData;

#import <Foundation/Foundation.h>


@interface POWSTrustRequest : NSObject

@property (retain, nonatomic) NSString *action; // ivar: _action
@property (retain, nonatomic) NSString *endpointURN; // ivar: _endpointURN
@property (retain, nonatomic) NSString *nonce; // ivar: _nonce
@property (retain, nonatomic) NSMutableData *password; // ivar: _password
@property (retain, nonatomic) NSString *to; // ivar: _to
@property (retain, nonatomic) NSString *userName; // ivar: _userName




@end


#endif