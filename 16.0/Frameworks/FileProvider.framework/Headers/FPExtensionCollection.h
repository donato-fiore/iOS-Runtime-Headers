// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPEXTENSIONCOLLECTION_H
#define FPEXTENSIONCOLLECTION_H

@class NSURL;


#import "FPItemCollection.h"
#import "FPItemID.h"
#import "FPExtensionEnumerationSettings.h"

@interface FPExtensionCollection : FPItemCollection {
    FPItemID *_alternateID;
    id *_providerDomainMonitoringContext;
    id *_dsCopySubscriber;
    NSURL *_dsCopySubscriberURL;
    BOOL _dsCopyShouldStopAccessingSubscriberURL;
}


@property (copy) FPExtensionEnumerationSettings *settings; // ivar: _settings


+(BOOL)_item:(id)arg0 isCollectionRootForObservedItemID:(id)arg1 ;
+(BOOL)item:(id)arg0 isValidForObservedItemID:(id)arg1 ;
-(BOOL)isCollectionValidForItem:(id)arg0 ;
-(BOOL)isRootItem:(id)arg0 ;
-(BOOL)recoverFromError:(id)arg0 ;
-(BOOL)shouldRetryError:(id)arg0 ;
-(id)createDataSourceWithSortDescriptors:(id)arg0 ;
-(id)description;
-(id)enumeratedItemID;
-(id)initWithSettings:(id)arg0 ;
-(id)scopedSearchQuery;
-(void)_failMonitoringWithError:(id)arg0 ;
-(void)_startMonitoringDSCopyProgress;
-(void)_startMonitoringDomains;
-(void)_stopMonitoringDSCopyProgress;
-(void)_stopMonitoringDomains;
-(void)startObserving;
-(void)stopObserving;
-(void)updateRootItem:(id)arg0 ;


@end


#endif