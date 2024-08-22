// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETLOGGINGUTILS_H
#define PETLOGGINGUTILS_H


#import <Foundation/Foundation.h>


@interface PETLoggingUtils : NSObject



+(id)domainStringForEvent:(id)arg0 featureId:(id)arg1 ;
+(id)keyStringForEvent:(id)arg0 featureId:(id)arg1 stringifiedProperties:(id)arg2 metaData:(id)arg3 ;
+(id)keyStringForStringifiedPairs:(id)arg0 ;
+(id)messageKeyStringForKey:(id)arg0 ;
+(void)_pushToBuffer:(id)arg0 keyStringForStringifiedPairs:(id)arg1 ;


@end


#endif