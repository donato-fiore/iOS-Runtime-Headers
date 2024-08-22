// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKAPPCACHE_H
#define IKAPPCACHE_H

@class NSString, NSArray, NSURL;
@protocol IKAppContextInternalDelegate, OS_dispatch_queue, IKApplication, IKAppContextDelegate, IKAppCacheDelegate;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"

@interface IKAppCache : NSObject <IKAppContextInternalDelegate>

 {
    NSObject<OS_dispatch_queue> *_appCacheQueue;
}


@property (weak, nonatomic) NSObject<IKApplication> *app; // ivar: _app
@property (weak, nonatomic) NSObject<IKAppContextDelegate> *appContextDelegate; // ivar: _appContextDelegate
@property (readonly, nonatomic) NSString *appJSChecksum; // ivar: _appJSChecksum
@property (readonly, nonatomic) NSArray *appJSChecksumHistory; // ivar: _appJSChecksumHistory
@property (readonly, copy, nonatomic) NSURL *appJSFileURL; // ivar: _appJSFileURL
@property (readonly, nonatomic) NSString *appLocalJSChecksum; // ivar: _appLocalJSChecksum
@property (readonly, copy, nonatomic) NSURL *appLocalJSFileURL; // ivar: _appLocalJSFileURL
@property (readonly, nonatomic) NSString *currentAppJSChecksum; // ivar: _currentAppJSChecksum
@property (readonly, nonatomic) NSURL *currentAppJSURL; // ivar: _currentAppJSURL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IKAppCacheDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldIgnoreHTTPCache; // ivar: _shouldIgnoreHTTPCache
@property (readonly, nonatomic) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (copy, nonatomic) id *validationCompletionHandler; // ivar: _validationCompletionHandler
@property (readonly, nonatomic) IKAppContext *validationContext; // ivar: _validationContext


-(BOOL)appContext:(id)arg0 shouldStartWithScript:(id)arg1 scriptURL:(id)arg2 loadedFromFallback:(BOOL)arg3 ;
-(BOOL)appContext:(id)arg0 validateDOMDocument:(id)arg1 inContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)isOurDispatchQueue;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldForceIgnoreHTTPCacheForAppContext:(id)arg0 ;
-(id)_cacheFileURLForAppJS:(id)arg0 checksum:(id)arg1 error:(*id)arg2 ;
-(id)_validatedChecksumForScript:(id)arg0 error:(*id)arg1 ;
-(id)deviceConfigForContext:(id)arg0 ;
-(id)initWithApplication:(id)arg0 ;
-(id)modalControllerForContext:(id)arg0 ;
-(id)navigationControllerForContext:(id)arg0 ;
-(id)objectForMediaItem:(id)arg0 ;
-(id)objectForPlayer:(id)arg0 ;
-(id)objectForPlaylist:(id)arg0 ;
-(id)tabBarForContext:(id)arg0 ;
-(void)_checkManifest;
-(void)_cleanupValidationContext;
-(void)_loadManifest;
-(void)_performAsync:(id)arg0 ;
-(void)_storeManifest;
-(void)appContext:(id)arg0 didFailWithError:(id)arg1 ;
-(void)appContext:(id)arg0 didStartWithOptions:(id)arg1 validatedJSString:(id)arg2 ;
-(void)appContext:(id)arg0 didStopWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 evaluateAppJavaScriptInContext:(id)arg1 ;
-(void)appContext:(id)arg0 needsReloadWithUrgency:(NSUInteger)arg1 options:(id)arg2 ;
-(void)appJSURLWithCompletion:(id)arg0 ;
-(void)cleanBlobStorageWithCompletion:(id)arg0 ;
-(void)refreshWithCompletion:(id)arg0 ;
-(void)updateCacheWithValidatedJS:(id)arg0 completion:(id)arg1 ;


@end


#endif