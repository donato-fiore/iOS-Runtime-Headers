// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCEXTENSIONMANAGER_H
#define INCEXTENSIONMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface INCExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_extensions;
    NSMutableDictionary *_killTimers;
}




+(id)sharedManager;
+(void)initialize;
-(BOOL)isExtensionLoadedForExtensionBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)_killExtensionWithBundleIdentifier:(id)arg0 ;
-(void)_manageExtension:(id)arg0 requestIdentifier:(id)arg1 ;
-(void)_resetKillTimerForExtensionWithBundleIdentifier:(id)arg0 ;
-(void)fetchExtensionForIntent:(id)arg0 extensionInputItems:(id)arg1 requiresTCC:(BOOL)arg2 completion:(id)arg3 ;
-(void)killExtension:(id)arg0 requestIdentifier:(id)arg1 afterTimeout:(CGFloat)arg2 ;


@end


#endif