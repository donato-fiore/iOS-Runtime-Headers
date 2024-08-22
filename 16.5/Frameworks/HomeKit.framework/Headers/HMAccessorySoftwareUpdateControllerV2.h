// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSOFTWAREUPDATECONTROLLERV2_H
#define HMACCESSORYSOFTWAREUPDATECONTROLLERV2_H

@class NSString, NSMutableDictionary;
@protocol HMEEventConsumer, HMFLogging, HMAccessorySoftwareUpdateControllerV2Delegate, HMESubscriptionProviding;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMSoftwareUpdateDocumentationManager.h"
#import "HMHome.h"

@interface HMAccessorySoftwareUpdateControllerV2 : NSObject <HMEEventConsumer, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMAccessorySoftwareUpdateControllerV2Delegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMSoftwareUpdateDocumentationManager *documentationManager; // ivar: _documentationManager
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMHome *home; // ivar: _home
@property (readonly) NSMutableDictionary *softwareUpdateByAccessory; // ivar: _softwareUpdateByAccessory
@property (readonly) NSObject<HMESubscriptionProviding> *subscriptionProvider; // ivar: _subscriptionProvider
@property (readonly) Class superclass;


+(id)accessoryUUIDsForAccessoryIdentifiers:(id)arg0 home:(id)arg1 ;
+(id)logCategory;
+(id)softwareUpdateFromSoftwareUpdateV2:(id)arg0 ;
+(id)topicFiltersForAccessoryIdentifiers:(id)arg0 home:(id)arg1 ;
-(id)initWithContext:(id)arg0 home:(id)arg1 subscriptionProvider:(id)arg2 documentationManager:(id)arg3 ;
-(id)messageDestinationForAccessory:(id)arg0 ;
-(id)softwareUpdateForAccessory:(id)arg0 withDescriptor:(id)arg1 ;
-(id)softwareUpdateProgressForAccessory:(id)arg0 withProgress:(id)arg1 ;
-(void)applySoftwareUpdate:(id)arg0 accessory:(id)arg1 completion:(id)arg2 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)fetchDocumentationFromMetadata:(id)arg0 completion:(id)arg1 ;
-(void)handleDidReceiveDescriptorEvent:(id)arg0 forAccessory:(id)arg1 ;
-(void)handleDidReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)handleDidReceiveProgressEvent:(id)arg0 forAccessory:(id)arg1 ;
-(void)scanForSoftwareUpdateOnAccessories:(id)arg0 withOptions:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)scanForSoftwareUpdateRepeatedlyOnAccessory:(id)arg0 andInstallUpdate:(BOOL)arg1 ;
-(void)subscribe:(id)arg0 completion:(id)arg1 ;
-(void)unsubscribe:(id)arg0 ;


@end


#endif