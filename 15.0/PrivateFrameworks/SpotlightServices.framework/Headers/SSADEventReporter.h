// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSADEVENTREPORTER_H
#define SSADEVENTREPORTER_H


#import <Foundation/Foundation.h>


@interface SSADEventReporter : NSObject



+(void)reportBadDirectivesForModelType:(NSUInteger)arg0 ;
+(void)reportBadL2Models;
+(void)reportBadL3Models;
+(void)reportKey:(id)arg0 ;
+(void)reportModelDeletionForType:(NSUInteger)arg0 ;
+(void)reportModelLoadingError;
+(void)reportModelUnpackageEventWithType:(NSUInteger)arg0 ;


@end


#endif