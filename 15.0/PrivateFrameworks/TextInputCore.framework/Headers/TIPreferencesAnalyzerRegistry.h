// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIPREFERENCESANALYZERREGISTRY_H
#define TIPREFERENCESANALYZERREGISTRY_H


#import <Foundation/Foundation.h>


@interface TIPreferencesAnalyzerRegistry : NSObject



-(id)init;
-(void)_registerPreference:(id)arg0 domain:(id)arg1 ;
-(void)_registerPreferences;
-(void)enumerateRegisteredPreferencesUsingBlock:(id)arg0 ;


@end


#endif