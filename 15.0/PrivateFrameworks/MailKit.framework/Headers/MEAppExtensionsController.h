// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEAPPEXTENSIONSCONTROLLER_H
#define MEAPPEXTENSIONSCONTROLLER_H

@class NSMapTable, NSArray, NSDictionary;
@protocol OS_dispatch_queue, EFCancelable;

#import <Foundation/Foundation.h>


@interface MEAppExtensionsController : NSObject {
    NSMapTable *_observers;
    os_unfair_lock_s _lock;
    id *_extensionMatchingContext;
    NSArray *_allRemoteExtensions;
}


@property (retain, nonatomic) NSDictionary *extensionsByIdentifier; // ivar: _extensionsByIdentifier
@property (retain, nonatomic) NSArray *previouslyEnabledExtensionIdentifiers; // ivar: _previouslyEnabledExtensionIdentifiers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<EFCancelable> *stateCaptureCancelable; // ivar: _stateCaptureCancelable
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateCaptureQueue; // ivar: _stateCaptureQueue


+(id)_emailExtensionAttributeDictionary;
+(id)log;
+(id)sharedInstance;
-(BOOL)_extension:(id)arg0 matchesCapabilities:(id)arg1 ;
-(BOOL)_extension:(id)arg0 matchesCriteria:(id)arg1 ;
-(BOOL)_extension:(id)arg0 matchesOldCriteria:(id)arg1 ;
-(id)_extensionsNewlyMatchingFromNewExtensions:(id)arg0 currentExtensions:(id)arg1 forCriteria:(id)arg2 ;
-(id)_extensionsNoLongerMatchingFromNewExtensions:(id)arg0 currentExtensions:(id)arg1 forCriteria:(id)arg2 ;
-(id)_remoteEmailExtensionsForExtensions:(id)arg0 enabledOnly:(BOOL)arg1 ;
-(id)extensionForIdentifier:(id)arg0 ;
-(id)init;
-(void)_logExtensionsStateWithReason:(id)arg0 ;
-(void)_startMatchingExtensions;
-(void)_stopMatchingExtensions;
-(void)dealloc;
-(void)registerMailAppExtensionsObserver:(id)arg0 capabilities:(id)arg1 includeDisabled:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif