// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECAGGREGATEKEYS_H
#define _DECAGGREGATEKEYS_H


#import <Foundation/Foundation.h>


@interface _DECAggregateKeys : NSObject



+(id)abGroupNilString;
+(id)categoryProperty;
+(id)consumerProperty;
+(id)consumerSubtypeProperty;
+(id)expertProperty;
+(id)featureIdentifier;
+(id)keyForExpert:(id)arg0 ;
+(id)keyForExpert:(id)arg0 prefix:(id)arg1 ;
+(id)keyForExpert:(id)arg0 subkey:(id)arg1 ;
+(id)keyForExpert:(id)arg0 subkey:(id)arg1 suffix:(id)arg2 ;
+(id)keyWithComponents:(id)arg0 ;
+(id)keyWithExpertIdentifier:(id)arg0 ;
+(id)keyWithExpertIdentifier:(id)arg0 category:(NSUInteger)arg1 consumer:(NSUInteger)arg2 prefix:(id)arg3 ;
+(id)keyWithExpertIdentifier:(id)arg0 category:(NSUInteger)arg1 consumerString:(id)arg2 prefix:(id)arg3 ;
+(id)keyWithExpertIdentifier:(id)arg0 prefix:(id)arg1 ;
+(id)keyWithExpertIdentifier:(id)arg0 subkey:(id)arg1 ;
+(id)keyWithExpertIdentifier:(id)arg0 subkey:(id)arg1 suffix:(id)arg2 ;
+(id)keyWithSubkey:(id)arg0 ;
+(id)outcomeProperty;
+(id)reasonProperty;
+(id)timingKeyForExpert:(id)arg0 subkey:(id)arg1 ;
+(id)timingKeyWithExpertIdentifier:(id)arg0 subkey:(id)arg1 ;


@end


#endif