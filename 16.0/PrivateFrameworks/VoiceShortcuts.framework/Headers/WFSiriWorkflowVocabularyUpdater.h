// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSIRIWORKFLOWVOCABULARYUPDATER_H
#define WFSIRIWORKFLOWVOCABULARYUPDATER_H

@class WFDebouncer, NSOrderedSet;
@protocol WFDatabaseObjectObserver, WFDatabaseProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFSiriWorkflowVocabularyUpdater : NSObject <WFDatabaseObjectObserver>



@property (readonly, nonatomic) NSObject<WFDatabaseProvider> *databaseProvider; // ivar: _databaseProvider
@property (readonly, nonatomic) WFDebouncer *debouncer; // ivar: _debouncer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSOrderedSet *speakableStrings; // ivar: _speakableStrings


-(id)initWithDatabaseProvider:(id)arg0 eventHandler:(id)arg1 ;
-(void)applicationWasRegistered:(id)arg0 ;
-(void)assistantPreferencesDidChange;
-(void)databaseDidChange:(id)arg0 modified:(id)arg1 inserted:(id)arg2 removed:(id)arg3 ;
-(void)startIfPossible;
-(void)updateIfPossible;


@end


#endif