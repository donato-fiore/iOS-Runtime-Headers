// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTCARRIERSPACEERROR_H
#define CTCARRIERSPACEERROR_H


#import <Foundation/Foundation.h>


@interface CTCarrierSpaceError : NSObject



+(id)errorForCode:(NSInteger)arg0 ;
+(id)errorForCode:(NSInteger)arg0 subdomain:(NSInteger)arg1 subdomainError:(NSInteger)arg2 ;
+(id)errorForCode:(NSInteger)arg0 withDescription:(id)arg1 ;


@end


#endif