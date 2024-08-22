// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSBAGNETWORKTASKRESULT_H
#define AMSBAGNETWORKTASKRESULT_H

@class NSDictionary, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface AMSBagNetworkTaskResult : NSObject

@property (retain, nonatomic) NSDictionary *data; // ivar: _data
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL expired;
@property (retain, nonatomic) NSString *storefront; // ivar: _storefront


-(id)initWithData:(id)arg0 ;


@end


#endif