// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSEARCHENGINEPREFERENCEOBSERVER_H
#define WBSSEARCHENGINEPREFERENCEOBSERVER_H

@protocol WBSSearchEnginePreferenceObserverDelegate;

#import <Foundation/Foundation.h>


@interface WBSSearchEnginePreferenceObserver : NSObject

@property (readonly, nonatomic) BOOL defaultSearchEngineMatchesExperiment;
@property (weak, nonatomic) NSObject<WBSSearchEnginePreferenceObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL duckDuckGoDefaultSearchEngine; // ivar: _duckDuckGoDefaultSearchEngine
@property (readonly, nonatomic) BOOL googleIsDefaultSearchEngine; // ivar: _googleIsDefaultSearchEngine
@property (readonly, nonatomic) BOOL isABTestingEnabled;


+(id)sharedObserver;
-(id)init;
-(void)_updateSearchEnginePreference:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif