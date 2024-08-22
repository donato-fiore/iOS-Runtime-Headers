// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERCSRREQUESTPARAMS_H
#define MTROPERATIONALCREDENTIALSCLUSTERCSRREQUESTPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterCSRRequestParams : NSObject

@property (retain, nonatomic) NSData *csrNonce; // ivar: _csrNonce
@property (retain, nonatomic) NSNumber *isForUpdateNOC; // ivar: _isForUpdateNOC
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif