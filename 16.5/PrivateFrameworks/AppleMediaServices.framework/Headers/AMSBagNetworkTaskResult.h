// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBAGNETWORKTASKRESULT_H
#define AMSBAGNETWORKTASKRESULT_H

@class NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface AMSBagNetworkTaskResult : NSObject

@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSDictionary *data; // ivar: _data
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL expired;
@property (readonly, nonatomic) NSString *loadedBagIdentifier; // ivar: _loadedBagIdentifier
@property (readonly, nonatomic) NSString *loadedBagPartialIdentifier; // ivar: _loadedBagPartialIdentifier
@property (readonly, nonatomic) NSString *storefront; // ivar: _storefront


-(id)initWithData:(id)arg0 expirationDate:(id)arg1 loadedBagIdentifier:(id)arg2 loadedBagPartialIdentifier:(id)arg3 storefront:(id)arg4 accountIdentifier:(id)arg5 ;


@end


#endif