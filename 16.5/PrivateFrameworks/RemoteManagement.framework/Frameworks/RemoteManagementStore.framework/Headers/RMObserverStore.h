// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMOBSERVERSTORE_H
#define RMOBSERVERSTORE_H

@protocol NSSecureCoding;


#import "RMBaseStore.h"

@interface RMObserverStore : RMBaseStore <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(void)storeWithIdentifier:(id)arg0 scope:(NSInteger)arg1 completionHandler:(id)arg2 ;
+(void)storesWithCompletionHandler:(id)arg0 ;
+(void)storesWithScope:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStore:(id)arg0 ;


@end


#endif