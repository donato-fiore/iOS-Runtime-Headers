// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARUSERPROFILECONFIG_H
#define _EARUSERPROFILECONFIG_H


#import <Foundation/Foundation.h>

#import "_EARPeopleSuggesterConfig.h"

@interface _EARUserProfileConfig : NSObject {
    unique_ptr<quasar::LmeConfig, std::default_delete<quasar::LmeConfig>> lmeConfig;
}


@property (readonly, nonatomic) _EARPeopleSuggesterConfig *peopleSuggesterConfig;


-(id)initWithConfiguration:(id)arg0 overrides:(id)arg1 ;


@end


#endif