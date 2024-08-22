// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDCLOUDFAMILYDATACOLLECTIONTASK_H
#define _CDCLOUDFAMILYDATACOLLECTIONTASK_H

@class NSString, NSDate, CNContactStore, HKHealthStore, NSMutableDictionary;
@protocol HMHomeManagerDelegate, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "_CDInteractionStore.h"
#import "_CDCloudFamilyDataCollectionSession.h"

@interface _CDCloudFamilyDataCollectionTask : NSObject <HMHomeManagerDelegate>

 {
    BOOL _selectedForDataCollection;
    BOOL _deleteSessionOnCleanup;
    NSString *_dataDirectory;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    _CDInteractionStore *_interactionStore;
    CNContactStore *_contactStore;
    HKHealthStore *_healthStore;
    NSMutableDictionary *_videoBundleIDLookup;
    _CDCloudFamilyDataCollectionSession *_session;
    CGFloat _samplingRate;
    NSUInteger _maxBatches;
    NSUInteger _daysPerBatch;
    NSUInteger _airPlayVideoEventCount;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *submissionBlock; // ivar: _submissionBlock
@property (readonly) Class superclass;


-(id)eventDictsForContacts:(id)arg0 ;
-(id)initWithActivity:(id)arg0 ;
-(void)execute;


@end


#endif