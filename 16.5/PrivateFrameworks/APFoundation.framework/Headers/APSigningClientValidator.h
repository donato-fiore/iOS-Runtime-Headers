// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSIGNINGCLIENTVALIDATOR_H
#define APSIGNINGCLIENTVALIDATOR_H


#import <Foundation/Foundation.h>


@interface APSigningClientValidator : NSObject



+(BOOL)_validateAllowListingForPoolCreation:(id)arg0 ;
+(BOOL)hasEntitlement:(id)arg0 ;
+(BOOL)isAllowedClient;
+(id)mockXPCObject;
+(void)setMockXPCObject:(id)arg0 ;


@end


#endif