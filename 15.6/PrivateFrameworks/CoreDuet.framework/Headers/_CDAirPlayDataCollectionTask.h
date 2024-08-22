// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDAIRPLAYDATACOLLECTIONTASK_H
#define _CDAIRPLAYDATACOLLECTIONTASK_H

@class NSString, NSDate, NSMutableDictionary;
@protocol OS_xpc_object, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "_CDAirPlayDataCollectionSession.h"
#import "_CDDateQuantizer.h"

@interface _CDAirPlayDataCollectionTask : NSObject {
    BOOL _selectedForDataCollection;
    BOOL _deleteSessionOnCleanup;
    NSString *_dataDirectory;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    NSMutableDictionary *_videoBundleIDLookup;
    _CDAirPlayDataCollectionSession *_session;
    _CDDateQuantizer *_dateQuantizer;
    CGFloat _samplingRate;
    NSUInteger _daysPerBatch;
    NSUInteger _maxBatches;
    NSUInteger _airPlayVideoEventCount;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *storage; // ivar: _storage
@property (copy, nonatomic) id *submissionBlock; // ivar: _submissionBlock


-(id)initWithStorage:(id)arg0 activity:(id)arg1 ;
-(id)initWithStorage:(id)arg0 activity:(id)arg1 sessionPath:(id)arg2 dataDirectory:(id)arg3 collectionDate:(id)arg4 samplingRate:(CGFloat)arg5 daysPerBatch:(NSUInteger)arg6 maxBatches:(NSUInteger)arg7 ;
-(void)execute;


@end


#endif