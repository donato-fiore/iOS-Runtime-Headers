// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDCLOUDFAMILYDATACOLLECTIONTASK_H
#define _CDCLOUDFAMILYDATACOLLECTIONTASK_H

@class NSString, NSDate, CNContactStore, HKHealthStore, NSMutableDictionary;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "_CDInteractionStore.h"
#import "_CDCloudFamilyDataCollectionSession.h"

@interface _CDCloudFamilyDataCollectionTask : NSObject {
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
@property (copy, nonatomic) id *submissionBlock; // ivar: _submissionBlock


-(id)eventDictsForContacts:(id)arg0 ;
-(id)initWithActivity:(id)arg0 ;
-(void)execute;


@end


#endif