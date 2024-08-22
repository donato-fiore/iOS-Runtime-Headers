// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPUSERDEFAULTS_H
#define TSWPUSERDEFAULTS_H


#import <Foundation/Foundation.h>


@interface TSWPUserDefaults : NSObject



+(BOOL)automaticallyDetectLinks;
+(BOOL)automaticallyDetectLists;
+(BOOL)p_UserDefaultSet:(id)arg0 force:(BOOL)arg1 ;
+(BOOL)spellCheckingEnabled;
+(BOOL)superscriptNumericalSuffixes;
+(id)invisiblesColor;
+(void)registerUserDefaults:(BOOL)arg0 ;
+(void)setAutomaticallyDetectLinks:(BOOL)arg0 ;
+(void)setAutomaticallyDetectLists:(BOOL)arg0 ;
+(void)setInvisiblesColor:(id)arg0 ;
+(void)setSpellCheckingEnabled:(BOOL)arg0 ;
+(void)setSuperscriptNumericalSuffixes:(BOOL)arg0 ;


@end


#endif