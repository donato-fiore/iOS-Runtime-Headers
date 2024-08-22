// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFHISTORYANALYZERCONTEXT_H
#define PFHISTORYANALYZERCONTEXT_H

@class NSMutableDictionary, NSArray, NSMutableSet;

#import <Foundation/Foundation.h>

#import "PFHistoryAnalyzerOptions.h"
#import "NSPersistentHistoryToken.h"

@interface PFHistoryAnalyzerContext : NSObject {
    BOOL _isFinished;
    PFHistoryAnalyzerOptions *_options;
    NSMutableDictionary *_objectIDToState;
    NSArray *_sortedStates;
    NSMutableSet *_processedTransactionIDs;
    NSPersistentHistoryToken *_finalHistoryToken;
}




-(BOOL)finishProcessing:(*id)arg0 ;
-(BOOL)processChange:(id)arg0 error:(*id)arg1 ;
-(BOOL)processTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)reset:(*id)arg0 ;
-(BOOL)resetStateForObjectID:(id)arg0 error:(*id)arg1 ;
-(id)analyzerStateForChangedObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchSortedStates:(*id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(id)newAnalyzerStateForChange:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif