// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERADDNOCPARAMS_H
#define MTROPERATIONALCREDENTIALSCLUSTERADDNOCPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterAddNOCParams : NSObject

@property (retain, nonatomic) NSNumber *adminVendorId; // ivar: _adminVendorId
@property (retain, nonatomic) NSNumber *caseAdminSubject; // ivar: _caseAdminSubject
@property (retain, nonatomic) NSData *icacValue; // ivar: _icacValue
@property (retain, nonatomic) NSData *ipkValue; // ivar: _ipkValue
@property (retain, nonatomic) NSData *nocValue; // ivar: _nocValue
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif