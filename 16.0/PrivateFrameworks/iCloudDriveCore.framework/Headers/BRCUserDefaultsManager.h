// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCUSERDEFAULTSMANAGER_H
#define BRCUSERDEFAULTSMANAGER_H

@class NSURL, NSDictionary, NSMutableDictionary, NSOperationQueue, NSURLSession, NSString;
@protocol NSURLSessionDownloadDelegate, OS_dispatch_queue, NSObject;

#import <Foundation/Foundation.h>


@interface BRCUserDefaultsManager : NSObject <NSURLSessionDownloadDelegate>

 {
    NSURL *_serverConfigurationURL;
    NSDictionary *_serverConfigurationDict;
    NSMutableDictionary *_userDefaultsCache;
    id *_configurationPlistDidUpdateBlock;
    NSOperationQueue *_downloadQueue;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<NSObject> *_defaultsDidChangeNotificationObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)defaultsForIdentifier:(id)arg0 ;
-(id)initWithPersonaID:(id)arg0 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_loadServerConfigurationDictionary;
-(void)_parsePlistWithURL:(id)arg0 ;
-(void)_prepopulateGlobalUserDefaults;
-(void)_reset;
-(void)_setServerConfigurationURL:(id)arg0 whenLoaded:(id)arg1 ;
-(void)dealloc;
-(void)loadCachedServerConfiguration;
-(void)reset;
-(void)setServerConfigurationURL:(id)arg0 whenLoaded:(id)arg1 ;


@end


#endif