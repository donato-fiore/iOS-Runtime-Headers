// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFDEFAULTAPPDATAPROVIDER_H
#define CSLPRFDEFAULTAPPDATAPROVIDER_H

@class NSString;
@protocol CSLPRFApplicationLibraryObserving, CSLPRFAppDataProvider, CSLPRFApplicationLibrary, CSLPRFAppDataProviderDelegate;

#import <Foundation/Foundation.h>


@interface CSLPRFDefaultAppDataProvider : NSObject <CSLPRFApplicationLibraryObserving, CSLPRFAppDataProvider>

 {
    id<CSLPRFApplicationLibrary> *_applicationLibrary;
    os_unfair_lock_s _lock;
    BOOL _lock_didLoadApps;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSLPRFAppDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)applicationLibrary:(id)arg0 didAddApplications:(id)arg1 ;
-(void)applicationLibrary:(id)arg0 didRemoveApplications:(id)arg1 ;
-(void)applicationLibrary:(id)arg0 didUpdateApplications:(id)arg1 ;
-(void)dealloc;
-(void)loadAppsWithCompletion:(id)arg0 ;
// -(void)loadAppsWithCompletion:(id)arg0 completionQueue:(unk)arg1  ;


@end


#endif