// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPOPERATIONALCREDENTIALSCLUSTERCSRRESPONSEPARAMS_H
#define CHIPOPERATIONALCREDENTIALSCLUSTERCSRRESPONSEPARAMS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CHIPOperationalCredentialsClusterCSRResponseParams : NSObject

@property (retain, nonatomic) NSData *attestationSignature; // ivar: _attestationSignature
@property (retain, nonatomic) NSData *nocsrElements; // ivar: _nocsrElements


-(id)init;


@end


#endif