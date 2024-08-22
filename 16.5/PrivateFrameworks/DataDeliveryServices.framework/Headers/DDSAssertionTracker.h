// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDSASSERTIONTRACKER_H
#define DDSASSERTIONTRACKER_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol DDSAssetTracking, DDSAssertionDataHandling, DDSAssetTrackingDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DDSAssertionTracker : NSObject <DDSAssetTracking>



@property (readonly, nonatomic) NSObject<DDSAssertionDataHandling> *dataHandler; // ivar: _dataHandler
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<DDSAssetTrackingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *trackedAssertionSets; // ivar: _trackedAssertionSets
@property (readonly, nonatomic) NSMutableArray *trackedAssertions; // ivar: _trackedAssertions


-(CGFloat)intervalForDownloadFrequency:(NSInteger)arg0 ;
-(id)allAssertions;
-(id)assertionDueForUpdateFrom:(id)arg0 SinceDate:(id)arg1 ;
-(id)assertionDueForUpdateSinceDate:(id)arg0 ;
-(id)assertionIDsForClientID:(id)arg0 ;
-(id)init;
-(id)initWithDataHandler:(id)arg0 ;
-(id)trackedAssetTypes;
-(void)addAssertionForQuery:(id)arg0 policy:(id)arg1 assertionID:(id)arg2 clientID:(id)arg3 ;
-(void)didUpdateAssertion:(id)arg0 atDate:(id)arg1 ;
-(void)removeAssertionWithID:(id)arg0 ;
-(void)resetAssertionDueDates;


@end


#endif