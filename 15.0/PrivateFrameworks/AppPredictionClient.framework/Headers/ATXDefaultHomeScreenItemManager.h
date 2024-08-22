// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDEFAULTHOMESCREENITEMMANAGER_H
#define ATXDEFAULTHOMESCREENITEMMANAGER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXDefaultHomeScreenItemManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_path;
}




+(id)sharedInstance;
-(BOOL)_doesBiomeAppLaunchDataGoBackAtLeast20Days;
-(id)_JSONCompatible:(id)arg0 ;
-(id)_generateOnboardingStacks;
-(id)fetchWidgetDiscoverabilityStacks;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)_fetchSmartStackOfVariant:(NSUInteger)arg0 localObserver:(int)arg1 completionHandler:(id)arg2 ;
-(void)_logFetchedOnboardingStack:(id)arg0 ;
-(void)_readFromFileWithCompletionHandler:(id)arg0 ;
-(void)fetchDefaultStacksJSONWithCompletionHandler:(id)arg0 ;
-(void)fetchDefaultStacksOfGridSize:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)fetchSmartStackOfVariant:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchSmartStackOfVariant:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)fetchSuggestedGalleryItemsOfGridSize:(NSUInteger)arg0 widgetFamilyMask:(NSUInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)writeHomeScreenUpdate:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif