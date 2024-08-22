// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCDEVIATIONINPUTMANAGER_H
#define HDMCDEVIATIONINPUTMANAGER_H

@class HDPrimaryProfile, HDKeyValueDomain;

#import <Foundation/Foundation.h>


@interface HDMCDeviationInputManager : NSObject {
    HDPrimaryProfile *_profile;
    HDKeyValueDomain *_keyValueDomain;
    HDKeyValueDomain *_analyticsKeyValueDomain;
}




-(BOOL)clearStateIfNecessaryFromSettingsManager:(id)arg0 usageRequirementsSatisfied:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithProfile:(id)arg0 ;


@end


#endif