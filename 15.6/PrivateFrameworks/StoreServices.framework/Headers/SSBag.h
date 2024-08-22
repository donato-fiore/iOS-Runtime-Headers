// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSBAG_H
#define SSBAG_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "SSBagProfileConfig.h"

@interface SSBag : NSObject

@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (retain, nonatomic) NSString *profile; // ivar: _profile
@property (readonly, nonatomic) SSBagProfileConfig *profileConfig;
@property (retain, nonatomic) NSString *profileVersion; // ivar: _profileVersion


+(NSUInteger)_AMSBagValueTypeFromSSBagValueType:(NSUInteger)arg0 ;
+(id)bagWithProfileConfig:(id)arg0 ;
+(id)cache;
+(void)removeAllDebugBackingDictionaries;
+(void)setDebugBackingDictionary:(id)arg0 forProfileConfig:(id)arg1 ;
-(BOOL)URLIsTrusted:(id)arg0 ;
-(BOOL)canHandleTrustedDomains;
-(id)URLForKey:(id)arg0 error:(*id)arg1 ;
-(id)URLPromiseForKey:(id)arg0 ;
-(id)_AMSBag;
-(id)_initWithProfile:(id)arg0 profileVersion:(id)arg1 ;
-(id)arrayForKey:(id)arg0 error:(*id)arg1 ;
-(id)arrayPromiseForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 error:(*id)arg1 ;
-(id)boolPromiseForKey:(id)arg0 ;
-(id)description;
-(id)dictionaryForKey:(id)arg0 error:(*id)arg1 ;
-(id)dictionaryPromiseForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 error:(*id)arg1 ;
-(id)doublePromiseForKey:(id)arg0 ;
-(id)integerForKey:(id)arg0 error:(*id)arg1 ;
-(id)integerPromiseForKey:(id)arg0 ;
-(id)resetCaches;
-(id)stringForKey:(id)arg0 error:(*id)arg1 ;
-(id)stringPromiseForKey:(id)arg0 ;
-(void)URLForKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)_bagChanged:(id)arg0 ;
-(void)arrayForKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)boolForKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)dictionaryForKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)doubleForKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)integerForKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)stringForKey:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif