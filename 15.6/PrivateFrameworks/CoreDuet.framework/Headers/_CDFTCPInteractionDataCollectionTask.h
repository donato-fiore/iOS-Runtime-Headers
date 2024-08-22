// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDFTCPINTERACTIONDATACOLLECTIONTASK_H
#define _CDFTCPINTERACTIONDATACOLLECTIONTASK_H

@class NSDate, NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "_CDInteractionStore.h"
#import "_CDFTCPInteractionDataCollectionSession.h"

@interface _CDFTCPInteractionDataCollectionTask : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly, copy, nonatomic) NSDate *collectionDate; // ivar: _collectionDate
@property (readonly, nonatomic) NSUInteger daysPerBatch; // ivar: _daysPerBatch
@property (nonatomic) BOOL deleteSessionOnCleanup; // ivar: _deleteSessionOnCleanup
@property (retain, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (readonly, nonatomic) NSUInteger maxBatches; // ivar: _maxBatches
@property (readonly, nonatomic) CGFloat samplingRate; // ivar: _samplingRate
@property (nonatomic) BOOL selectedForDataCollection; // ivar: _selectedForDataCollection
@property (retain, nonatomic) _CDFTCPInteractionDataCollectionSession *session; // ivar: _session
@property (readonly, copy, nonatomic) NSString *sessionPath; // ivar: _sessionPath
@property (readonly, nonatomic) NSUInteger twoWeekPeriodsInLookback; // ivar: _twoWeekPeriodsInLookback


-(id)initWithStore:(id)arg0 activity:(id)arg1 ;
-(id)initWithStore:(id)arg0 activity:(id)arg1 sessionPath:(id)arg2 collectionDate:(id)arg3 samplingRate:(CGFloat)arg4 maxBatches:(NSUInteger)arg5 daysPerBatch:(NSUInteger)arg6 twoWeekPeriodsInLookback:(NSUInteger)arg7 ;
-(void)_execute;
-(void)cleanup;
-(void)execute;


@end


#endif