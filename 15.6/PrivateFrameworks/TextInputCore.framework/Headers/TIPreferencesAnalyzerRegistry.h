// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIPREFERENCESANALYZERREGISTRY_H
#define TIPREFERENCESANALYZERREGISTRY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TIPreferencesAnalyzerRegistry : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSMutableArray *registry; // ivar: _registry


-(id)init;
-(void)_registerPreference:(id)arg0 domain:(id)arg1 defaultValue:(id)arg2 ;
-(void)enumerateRegisteredPreferencesUsingBlock:(id)arg0 ;


@end


#endif