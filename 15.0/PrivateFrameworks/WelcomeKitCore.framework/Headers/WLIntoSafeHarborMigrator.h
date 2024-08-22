// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLINTOSAFEHARBORMIGRATOR_H
#define WLINTOSAFEHARBORMIGRATOR_H

@class NSString, WLFeaturePayload, WLSourceDevice;
@protocol WLDataclassMigrating, WLAnalyticsDataSource;

#import <Foundation/Foundation.h>

#import "WLSafeHarborManager.h"
#import "WLSQLController.h"
#import "WLSafeHarborDirectory.h"

@interface WLIntoSafeHarborMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource>

 {
    NSString *_bundleID;
    NSString *_contentType;
    NSString *_dataType;
    WLSafeHarborManager *_safeHarborManager;
    WLSQLController *_sqlController;
    WLSafeHarborDirectory *_safeHarborDirectory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) WLFeaturePayload *featurePayload; // ivar: _featurePayload
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WLSourceDevice *sourceDevice; // ivar: _sourceDevice
@property (readonly) Class superclass;


-(BOOL)accountBased;
-(BOOL)canMigrate;
-(BOOL)confirmItemSizeWithSourceBeforeDownloading;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(id)contentType;
-(id)dataType;
-(id)importDidEnd;
-(id)importWillBegin;
-(id)initWithBundleID:(id)arg0 contentType:(id)arg1 dataType:(id)arg2 safeHarborManager:(id)arg3 sourceDevice:(id)arg4 sqlController:(id)arg5 ;
-(id)safeHarborBundleID;
-(void)addWorkingTime:(NSUInteger)arg0 ;
-(void)enable;
-(void)importRecordData:(id)arg0 summary:(id)arg1 account:(id)arg2 completion:(id)arg3 ;
-(void)setEstimatedDataSize:(NSUInteger)arg0 ;
-(void)setState:(id)arg0 ;


@end


#endif