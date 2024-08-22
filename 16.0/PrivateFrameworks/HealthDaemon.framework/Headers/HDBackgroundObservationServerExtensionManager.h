// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDBACKGROUNDOBSERVATIONSERVEREXTENSIONMANAGER_H
#define HDBACKGROUNDOBSERVATIONSERVEREXTENSIONMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HDBackgroundObservationServerExtensionManager : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_availableExtensions;
}




-(id)extensionForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif