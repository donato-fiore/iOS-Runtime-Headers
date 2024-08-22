// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSERROR_H
#define DSERROR_H


#import <Foundation/Foundation.h>


@interface DSError : NSObject



+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 appName:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 appName:(id)arg1 serviceName:(id)arg2 underlyingErrors:(id)arg3 ;
+(id)errorWithCode:(NSInteger)arg0 serviceName:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 sourceName:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 sourceName:(id)arg1 underlyingErrors:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 underlyingErrors:(id)arg1 ;


@end


#endif