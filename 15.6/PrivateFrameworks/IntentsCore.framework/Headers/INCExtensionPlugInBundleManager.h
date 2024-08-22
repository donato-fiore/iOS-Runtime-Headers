// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCEXTENSIONPLUGINBUNDLEMANAGER_H
#define INCEXTENSIONPLUGINBUNDLEMANAGER_H

@class NSMutableDictionary, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface INCExtensionPlugInBundleManager : NSObject {
    NSMutableDictionary *_intentsSupported;
    NSObject<OS_dispatch_queue> *_intentsSupportedQueue;
    NSDictionary *_pluginsPlistDictionary;
}




+(id)sharedManager;
-(BOOL)_registerBundle:(id)arg0 bundleIdentifier:(id)arg1 ;
-(BOOL)loadBundleForBundleIdentifier:(id)arg0 wasPrewarmed:(*BOOL)arg1 ;
-(id)_extensionPlugInBundleForIntent:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)extensionForIntent:(id)arg0 ;
-(id)init;
-(void)_setExtensionPlugInBundle:(id)arg0 forIntent:(id)arg1 bundleIdentifier:(id)arg2 ;


@end


#endif