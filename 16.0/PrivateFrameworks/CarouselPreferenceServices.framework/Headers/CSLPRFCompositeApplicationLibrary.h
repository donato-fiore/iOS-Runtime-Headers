// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLPRFCOMPOSITEAPPLICATIONLIBRARY_H
#define CSLPRFCOMPOSITEAPPLICATIONLIBRARY_H

@class NSMutableDictionary, NSArray, NSDictionary, NSString;
@protocol CSLPRFApplicationLibraryObserving, CSLPRFApplicationLibrary;

#import <Foundation/Foundation.h>

#import "CSLPRFObservationHelper.h"

@interface CSLPRFCompositeApplicationLibrary : NSObject <CSLPRFApplicationLibraryObserving, CSLPRFApplicationLibrary>

 {
    id<CSLPRFApplicationLibrary> *_primaryLibrary;
    id<CSLPRFApplicationLibrary> *_secondaryLibrary;
    CSLPRFObservationHelper *_observationHelper;
    NSMutableDictionary *_lock_applications;
    NSMutableDictionary *_lock_primaryApplications;
    NSMutableDictionary *_lock_primaryApplicationsByCounterpart;
    NSMutableDictionary *_lock_secondaryApplications;
    NSMutableDictionary *_lock_secondaryApplicationsByCounterpart;
    os_unfair_lock_s _lock;
    BOOL _lock_observing;
}


@property (readonly, nonatomic) NSArray *allApplications;
@property (readonly, nonatomic) NSDictionary *allApplicationsDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)applicationWithBundleIdentifier:(id)arg0 ;
-(id)initWithPrimaryLibrary:(id)arg0 secondaryLibrary:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)allApplicationsWithCompletion:(id)arg0 ;
-(void)applicationLibrary:(id)arg0 didAddApplications:(id)arg1 ;
-(void)applicationLibrary:(id)arg0 didRemoveApplications:(id)arg1 ;
-(void)applicationLibrary:(id)arg0 didUpdateApplications:(id)arg1 ;
-(void)applicationWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif