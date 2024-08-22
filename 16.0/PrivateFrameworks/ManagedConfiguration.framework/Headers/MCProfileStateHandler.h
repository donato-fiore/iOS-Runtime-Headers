// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPROFILESTATEHANDLER_H
#define MCPROFILESTATEHANDLER_H



#import "MCStateHandler.h"

@interface MCProfileStateHandler : MCStateHandler



+(id)restrictionsStateDictionaryWithDetailsIncluded:(BOOL)arg0 ;
+(id)settingsStateDictionaryWithDetailsIncluded:(BOOL)arg0 ;
+(void)addProfileRestrictionsStateHandler;
+(void)addProfileSettingsStateHandler;


@end


#endif