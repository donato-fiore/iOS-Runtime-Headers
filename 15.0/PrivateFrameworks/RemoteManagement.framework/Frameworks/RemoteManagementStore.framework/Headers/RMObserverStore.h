// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMOBSERVERSTORE_H
#define RMOBSERVERSTORE_H

@protocol NSSecureCoding;


#import "RMBaseStore.h"

@interface RMObserverStore : RMBaseStore <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(void)storeWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
+(void)storesWithCompletionHandler:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStore:(id)arg0 ;


@end


#endif