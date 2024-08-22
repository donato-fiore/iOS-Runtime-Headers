// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONLIBRARYPREDICATEQUERYENGINE_H
#define SBHICONLIBRARYPREDICATEQUERYENGINE_H



#import "SBHIconLibraryAbstractQueryEngine.h"
#import "SBHIconLibraryQueryContext.h"

@interface SBHIconLibraryPredicateQueryEngine : SBHIconLibraryAbstractQueryEngine {
    SBHIconLibraryQueryContext *_currentlyRunningQueryContext;
}




-(void)_processingQueue_teardownQueryContext:(id)arg0 ;
-(void)executeQuery:(id)arg0 ;


@end


#endif