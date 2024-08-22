// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPOPERATIONALCREDENTIALSCLUSTERADDNOCPARAMS_H
#define CHIPOPERATIONALCREDENTIALSCLUSTERADDNOCPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CHIPOperationalCredentialsClusterAddNOCParams : NSObject

@property (retain, nonatomic) NSNumber *adminVendorId; // ivar: _adminVendorId
@property (retain, nonatomic) NSNumber *caseAdminNode; // ivar: _caseAdminNode
@property (retain, nonatomic) NSData *icacValue; // ivar: _icacValue
@property (retain, nonatomic) NSData *ipkValue; // ivar: _ipkValue
@property (retain, nonatomic) NSData *nocValue; // ivar: _nocValue


-(id)init;


@end


#endif