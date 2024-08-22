// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWCPREFS_H
#define _SWCPREFS_H


#import <Foundation/Foundation.h>


@interface _SWCPrefs : NSObject

@property (readonly, getter=isAppleInternal) BOOL appleInternal;
@property (readonly, getter=isFastCheckEnabled) BOOL fastCheckEnabled;
@property (readonly) NSUInteger maximumRetryCount;
@property (readonly) CGFloat retryIntervalAfterFailure;
@property (readonly) CGFloat retryIntervalAfterSuccess;
@property (readonly) BOOL verifyExtendedValidation;


+(id)sharedPrefs;
-(BOOL)_boolForKey:(id)arg0 defaultValue:(BOOL)arg1 ;
-(CGFloat)retryIntervalAfterReachLimitWithFailure:(NSUInteger)arg0 ;
-(CGFloat)retryIntervalAfterSuccess:(BOOL)arg0 ;
-(NSUInteger)_recheckFuzzForSuccess:(BOOL)arg0 ;
-(NSUInteger)_unsignedIntegerForKey:(id)arg0 defaultValue:(NSUInteger)arg1 ;
-(NSUInteger)_unsignedIntegerForKey:(id)arg0 defaultValue:(NSUInteger)arg1 minimumValue:(NSUInteger)arg2 maximumValue:(NSUInteger)arg3 ;
-(id)_init;
-(id)_stringForKey:(id)arg0 defaultValue:(id)arg1 ;
-(id)containerURLReturningError:(*id)arg0 ;
-(id)descriptionOfAllPrefs;
-(void)_setString:(id)arg0 forKey:(id)arg1 ;


@end


#endif