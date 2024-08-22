// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOEFFECTIVESETTINGSSTORE_H
#define MOEFFECTIVESETTINGSSTORE_H

@protocol MOSettingsReader;


#import "MOSettingsStore.h"

@interface MOEffectiveSettingsStore : MOSettingsStore <MOSettingsReader>





+(id)new;
-(id)init;
-(id)reader;
-(id)valueForSetting:(id)arg0 inGroup:(id)arg1 ;


@end


#endif