// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDEFAULTS_H
#define IMDEFAULTS_H


#import <Foundation/Foundation.h>


@interface IMDefaults : NSObject



+(id)sharedInstance;
-(BOOL)getBoolFromDomain:(id)arg0 forKey:(id)arg1 ;
-(BOOL)getBoolFromDomain:(id)arg0 forKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(id)getValueFromDomain:(id)arg0 forKey:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forDomain:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg0 forDomain:(id)arg1 forKey:(id)arg2 ;


@end


#endif