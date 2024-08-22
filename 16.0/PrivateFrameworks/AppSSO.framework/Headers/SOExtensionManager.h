// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOEXTENSIONMANAGER_H
#define SOEXTENSIONMANAGER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SOExtensionFinder.h"

@interface SOExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}


@property (readonly, nonatomic) NSArray *loadedExtensions; // ivar: _loadedExtensions


+(BOOL)_isMatchedExtension:(id)arg0 forBundleIdentifier:(id)arg1 ;
+(BOOL)isAppleConnectExtensionBundleIdentifier:(id)arg0 ;
+(BOOL)isInternalExtensionBundleIdentifier:(id)arg0 ;
+(BOOL)isTiburonExtensionBundleIdentifier:(id)arg0 ;
+(id)internalExtensionBundleIdentifier;
+(id)internalExtensionsBundleIdentifiers;
+(id)sharedInstance;
+(void)_sendNotificationsLoadedExtensions:(id)arg0 new:(id)arg1 removed:(id)arg2 ;
-(BOOL)isLoadedExtensionWithBundleIdentifer:(id)arg0 ;
-(id)_doLoadExtensions;
-(id)init;
-(id)loadExtensionWithBundleIdentifier:(id)arg0 ;
-(id)loadInternalExtension;
-(id)loadedExtensionWithBundleIdentifer:(id)arg0 ;
-(id)loadedInternalExtension;
-(void)_doBeginMatchingExtensions;
-(void)_doEndMatchingExtensions;
-(void)beginMatchingExtensions;
-(void)dealloc;
-(void)endMatchingExtensions;
-(void)loadExtensionWithBundleIdentifer:(id)arg0 completion:(id)arg1 ;
-(void)loadExtensions;
-(void)unloadExtensions;


@end


#endif