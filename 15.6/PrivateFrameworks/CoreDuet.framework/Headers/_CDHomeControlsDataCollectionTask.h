// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDHOMECONTROLSDATACOLLECTIONTASK_H
#define _CDHOMECONTROLSDATACOLLECTIONTASK_H

@class NSString, NSDate;
@protocol _DKKnowledgeQuerying, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "_CDHomeControlsDataCollectionSession.h"

@interface _CDHomeControlsDataCollectionTask : NSObject {
    BOOL _selectedForDataCollection;
    BOOL _deleteSessionOnCleanup;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    id<_DKKnowledgeQuerying> *_knowledgeStore;
    _CDHomeControlsDataCollectionSession *_session;
    CGFloat _samplingRate;
    NSUInteger _maxBatches;
    NSUInteger _daysPerBatch;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity


-(id)initWithStorage:(id)arg0 activity:(id)arg1 ;
-(void)execute;


@end


#endif