// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSAPPFOREGROUNDTRIGGERCONFIGURATION_H
#define DNDSAPPFOREGROUNDTRIGGERCONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface DNDSAppForegroundTriggerConfiguration : NSObject {
    NSDictionary *_bundleIDToModeIdentifierTriggers;
}




-(id)description;
-(id)init;
-(id)modeIdentifierForBundleIdentifier:(id)arg0 ;
-(id)triggeringBundleIdentifiers;
-(void)addTriggerForModeWithIdentifier:(id)arg0 onForegroundOfApp:(id)arg1 ;


@end


#endif