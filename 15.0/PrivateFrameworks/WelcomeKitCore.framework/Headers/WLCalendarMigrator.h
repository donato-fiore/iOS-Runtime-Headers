// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLCALENDARMIGRATOR_H
#define WLCALENDARMIGRATOR_H

@class EKEventStore, NSString, WLFeaturePayload;
@protocol WLDataclassMigrating, WLAnalyticsDataSource;

#import <Foundation/Foundation.h>


@interface WLCalendarMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource>

 {
    EKEventStore *_eventStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) WLFeaturePayload *featurePayload; // ivar: _featurePayload
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contentType;
-(BOOL)accountBased;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(id)contentType;
-(id)dataType;
-(id)importWillBegin;
-(id)init;
-(void)_importDataRecord:(id)arg0 summary:(id)arg1 ;
-(void)addWorkingTime:(NSUInteger)arg0 ;
-(void)enable;
-(void)estimateItemSizeForSummary:(id)arg0 account:(id)arg1 ;
-(void)importRecordData:(id)arg0 summary:(id)arg1 account:(id)arg2 completion:(id)arg3 ;
-(void)setEstimatedDataSize:(NSUInteger)arg0 ;
-(void)setState:(id)arg0 ;


@end


#endif