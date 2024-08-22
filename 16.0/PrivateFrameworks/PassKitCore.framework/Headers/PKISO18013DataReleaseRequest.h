// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKISO18013DATARELEASEREQUEST_H
#define PKISO18013DATARELEASEREQUEST_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "PKTransactionReleasedData.h"

@interface PKISO18013DataReleaseRequest : NSObject

@property (retain, nonatomic) NSData *authenticationACL; // ivar: _authenticationACL
@property (retain, nonatomic) PKTransactionReleasedData *dataElements; // ivar: _dataElements
@property (retain, nonatomic) NSData *externalizedAuthenticationContext; // ivar: _externalizedAuthenticationContext
@property (retain, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (retain, nonatomic) NSString *organizationUnit; // ivar: _organizationUnit
@property (retain, nonatomic) NSString *rpIdentifier; // ivar: _rpIdentifier




@end


#endif