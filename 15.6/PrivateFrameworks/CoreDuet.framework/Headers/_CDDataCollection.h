// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDDATACOLLECTION_H
#define _CDDATACOLLECTION_H

@class NSString, NSDate;
@protocol OS_xpc_object, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "_CDDataCollectionSession.h"
#import "_CDEventStreamsRegister.h"

@interface _CDDataCollection : NSObject {
    BOOL _selectedForDataCollection;
    BOOL _deleteSessionOnCleanup;
    NSString *_dataDirectory;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    _CDDataCollectionSession *_session;
    CGFloat _samplingRate;
    NSUInteger _daysPerBatch;
    NSUInteger _maxBatches;
    _CDEventStreamsRegister *_eventStreamsRegister;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *storage; // ivar: _storage
@property (copy, nonatomic) id *submissionBlock; // ivar: _submissionBlock


-(id)initWithStorage:(id)arg0 activity:(id)arg1 ;
-(id)initWithStorage:(id)arg0 activity:(id)arg1 sessionPath:(id)arg2 dataDirectory:(id)arg3 collectionDate:(id)arg4 samplingRate:(CGFloat)arg5 daysPerBatch:(NSUInteger)arg6 eventStreams:(id)arg7 maxBatches:(NSUInteger)arg8 ;
-(void)execute;


@end


#endif