// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKLINKEDAPPLICATION_H
#define PKLINKEDAPPLICATION_H

@class AMSLookupItem, NSHashTable, NSMutableArray, SKStoreProductViewController, SSSoftwareLibraryItem, NSNumber, NSString, NSURL, UIImage, NSArray;
@protocol SKStoreProductViewControllerDelegate, PKCancelable;

#import <Foundation/Foundation.h>


@interface PKLinkedApplication : NSObject <SKStoreProductViewControllerDelegate>

 {
    AMSLookupItem *_foundStoreItem;
    os_unfair_lock_s _pendingLock;
    id<PKCancelable> *_pendingUpdate;
    BOOL _loaded;
    BOOL _loading;
    NSHashTable *_observers;
    NSMutableArray *_completionHandlers;
    SKStoreProductViewController *_presentedViewController;
    SSSoftwareLibraryItem *_foundLibraryItem;
}


@property (readonly, nonatomic) NSNumber *averageRating;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSURL *defaultLaunchURL; // ivar: _defaultLaunchURL
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize expectedIconSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *price;
@property (readonly, nonatomic) NSString *publisher;
@property (readonly, nonatomic) NSInteger state;
@property (copy, nonatomic) NSArray *storeIDs; // ivar: _storeIDs
@property (readonly, nonatomic) NSNumber *storeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useSmallIcon; // ivar: _useSmallIcon


+(id)_openOptionsWithURL:(id)arg0 ;
-(BOOL)_useLibraryItem;
-(id)_iconImageDescriptorForScale:(CGFloat)arg0 ;
-(id)init;
-(id)initWithPass:(id)arg0 ;
-(id)initWithStoreIDs:(id)arg0 defaultLaunchURL:(id)arg1 ;
-(void)_notifyObserversOfStateChange;
-(void)_reloadApplicationStateWithCompletion:(id)arg0 ;
-(void)_unloadApplicationState;
-(void)_updateApplicationStateWithCompletion:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)installedApplicationsDidChangeNotification:(id)arg0 ;
-(void)openApplication:(id)arg0 ;
-(void)openApplication:(id)arg0 withLaunchOptions:(NSUInteger)arg1 ;
-(void)openApplication:(id)arg0 withLaunchOptions:(NSUInteger)arg1 launchURL:(id)arg2 ;
-(void)productViewControllerDidFinish:(id)arg0 ;
-(void)reloadApplicationStateIfNecessary;
-(void)reloadApplicationStateIfNecessaryWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif