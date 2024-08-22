// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFHISTORYANALYZERCONTEXT_H
#define PFHISTORYANALYZERCONTEXT_H

@class NSMutableDictionary, NSMutableSet, NSArray;

#import <Foundation/Foundation.h>

#import "NSPersistentHistoryToken.h"
#import "PFHistoryAnalyzerOptions.h"

@interface PFHistoryAnalyzerContext : NSObject {
    NSMutableDictionary *_objectIDToState;
    NSMutableSet *_processedTransactionIDs;
    NSArray *_sortedStates;
    BOOL _isFinished;
    NSPersistentHistoryToken *_finalHistoryToken;
    PFHistoryAnalyzerOptions *_options;
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