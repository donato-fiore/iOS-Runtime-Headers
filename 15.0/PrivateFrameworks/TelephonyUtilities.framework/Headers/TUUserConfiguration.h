// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUUSERCONFIGURATION_H
#define TUUSERCONFIGURATION_H



#import "TUConfiguration.h"

@interface TUUserConfiguration : TUConfiguration



+(id)registeredDefaults;
+(id)userDefaults;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)synchronize;


@end


#endif