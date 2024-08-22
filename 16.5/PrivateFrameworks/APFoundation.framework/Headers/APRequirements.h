// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APREQUIREMENTS_H
#define APREQUIREMENTS_H


#import <Foundation/Foundation.h>


@interface APRequirements : NSObject



+(BOOL)_buildErrorWithCode:(NSInteger)arg0 message:(id)arg1 returningError:(*id)arg2 ;
+(BOOL)_testForFileSystemReturningError:(*id)arg0 ;
+(BOOL)hasRequirements:(NSUInteger)arg0 error:(*id)arg1 ;
+(NSUInteger)failForRequirements;
+(void)setFailForRequirements:(NSUInteger)arg0 ;


@end


#endif