// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSMEDIATOKENSERVICEUSERDEFAULTSSTORE_H
#define AMSMEDIATOKENSERVICEUSERDEFAULTSSTORE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSMediaTokenServiceUserDefaultsStore : NSObject

@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier


-(BOOL)storeToken:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 ;
-(id)retrieveToken;


@end


#endif