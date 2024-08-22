// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPROACTIVEHOMESCREENSUGGESTIONPROVIDER_H
#define SBPROACTIVEHOMESCREENSUGGESTIONPROVIDER_H

@class NSHashTable, ATXHomeScreenPrediction, NSString, SBHIconManager;
@protocol ATXHomeScreenSuggestionClientObserver;

#import <Foundation/Foundation.h>


@interface SBProactiveHomeScreenSuggestionProvider : NSObject <ATXHomeScreenSuggestionClientObserver>

 {
    NSHashTable *_observers;
}


@property (retain, nonatomic) ATXHomeScreenPrediction *currentPrediction; // ivar: _currentPrediction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (readonly) Class superclass;


-(id)_iconDataSourceInIcon:(id)arg0 withUniqueIdentifier:(id)arg1 extensionBundleIdentifier:(id)arg2 widgetKind:(id)arg3 suggestionSource:(NSInteger)arg4 ;
-(id)_makeDataSourceForAtxWidget:(id)arg0 ;
-(id)_supportedElementClasses;
-(id)iconModel;
-(id)initWithIconManager:(id)arg0 ;
-(id)rootFolder;
-(void)addObserver:(id)arg0 ;
-(void)processUpdatedPredictions:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)suggestionClientDidRefreshSuggestions:(id)arg0 ;
-(void)updatePredictions;


@end


#endif