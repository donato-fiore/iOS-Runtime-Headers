// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERCSRRESPONSEPARAMS_H
#define MTROPERATIONALCREDENTIALSCLUSTERCSRRESPONSEPARAMS_H

@class NSData, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterCSRResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSData *attestationSignature; // ivar: _attestationSignature
@property (copy, nonatomic) NSData *nocsrElements; // ivar: _nocsrElements
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif