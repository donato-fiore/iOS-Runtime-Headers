// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIASYSTEMSYMPTOMHANDLER_H
#define HMDMEDIASYSTEMSYMPTOMHANDLER_H

@class HMFObject, NSDictionary, NSString, NSSet, HMFMessageDispatcher, NSUUID;
@protocol NSSecureCoding, HMFLogging, OS_dispatch_queue;


#import "HMDMediaSystem.h"

@interface HMDMediaSystemSymptomHandler : HMFObject <NSSecureCoding, HMFLogging>



@property (copy, nonatomic) NSDictionary *currentSymptoms; // ivar: _currentSymptoms
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMDMediaSystem *mediaSystem; // ivar: _mediaSystem
@property (readonly, nonatomic) NSSet *mergedSymptoms;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)_initializePlaceholderSymptomsDict:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaSystem:(id)arg0 symptoms:(id)arg1 ;
-(id)logIdentifier;
-(void)_handleNewDiscoveredSymptoms:(id)arg0 forAccessory:(id)arg1 ;
-(void)_refreshCurrentDeviceSymptoms;
-(void)_updateBackingStoreModelWithNewSymptoms:(id)arg0 ;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleMediaSystemSymptoms:(id)arg0 message:(id)arg1 ;
-(void)handleNewDiscoveredSymptoms:(id)arg0 forAccessory:(id)arg1 ;
-(void)refreshCurrentDeviceSymptoms;


@end


#endif