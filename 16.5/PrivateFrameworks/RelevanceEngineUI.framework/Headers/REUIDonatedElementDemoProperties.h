// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REUIDONATEDELEMENTDEMOPROPERTIES_H
#define REUIDONATEDELEMENTDEMOPROPERTIES_H

@class NSString, INIntent, UIImage;


#import "REUIDonatedElementProperties.h"

@interface REUIDonatedElementDemoProperties : REUIDonatedElementProperties {
    NSString *_demoBundleIdentifier;
    INIntent *_demoIntent;
    NSString *_demoAppName;
    UIImage *_demoAppIcon;
}




+(id)createWithIntent:(id)arg0 bundleIdentifier:(id)arg1 appName:(id)arg2 appIcon:(id)arg3 ;
-(id)appIcon;
-(id)appName;
-(id)bundleIdentifier;
-(id)intent;


@end


#endif