// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERCSRRESPONSEPARAMS_H
#define MTROPERATIONALCREDENTIALSCLUSTERCSRRESPONSEPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterCSRResponseParams : NSObject

@property (retain, nonatomic) NSData *attestationSignature; // ivar: _attestationSignature
@property (retain, nonatomic) NSData *nocsrElements; // ivar: _nocsrElements
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif