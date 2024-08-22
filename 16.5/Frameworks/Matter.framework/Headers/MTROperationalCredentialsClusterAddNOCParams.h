// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERADDNOCPARAMS_H
#define MTROPERATIONALCREDENTIALSCLUSTERADDNOCPARAMS_H

@class NSNumber, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterAddNOCParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *adminVendorId; // ivar: _adminVendorId
@property (copy, nonatomic) NSNumber *caseAdminSubject; // ivar: _caseAdminSubject
@property (copy, nonatomic) NSData *icacValue; // ivar: _icacValue
@property (copy, nonatomic) NSData *ipkValue; // ivar: _ipkValue
@property (copy, nonatomic) NSData *nocValue; // ivar: _nocValue
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif