// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADMETRICMANAGER_H
#define ADMETRICMANAGER_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>

#import "ADCapService.h"
#import "ADDESRecordsManager.h"

@interface ADMetricManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *activeAdvertisementsByInstanceID; // ivar: _activeAdvertisementsByInstanceID
@property (retain, nonatomic) ADCapService *capService; // ivar: _capService
@property (retain, nonatomic) NSMutableSet *clickCapUpdated; // ivar: _clickCapUpdated
@property (retain, nonatomic) ADDESRecordsManager *desRecordManager; // ivar: _desRecordManager
@property (retain, nonatomic) NSMutableSet *downloadCapUpdated; // ivar: _downloadCapUpdated
@property (retain, nonatomic) NSMutableSet *frequencyCapUpdated; // ivar: _frequencyCapUpdated


+(id)sharedInstance;
+(id)testInstance;
-(NSInteger)buttonStateToDownloadType:(NSInteger)arg0 ;
-(id)buttonStateToString:(NSInteger)arg0 ;
-(id)frequencyCapTypeToString:(NSInteger)arg0 ;
-(id)init;
-(void)activateAdvertisements:(id)arg0 ;
-(void)adMarkerInteracted:(id)arg0 ;
-(void)completed:(id)arg0 ;
-(void)deactivateAdvertisements:(id)arg0 ;
-(void)deactivateAdvertisementsByInstanceIDs:(id)arg0 ;
-(void)deactivateAllAdvertisements;
-(void)getApp:(id)arg0 buttonState:(NSInteger)arg1 completion:(id)arg2 ;
-(void)getApp:(id)arg0 buttonState:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)interacted:(id)arg0 ;
-(void)offScreen:(id)arg0 ;
-(void)onScreen:(id)arg0 ;
-(void)placed:(id)arg0 ;
-(void)received:(id)arg0 ;
-(void)replaceCapService:(id)arg0 ;
-(void)updateClickCap:(id)arg0 targetAdvertisement:(id)arg1 ;
-(void)updateStoreKitAttribution:(id)arg0 targetAdvertisement:(id)arg1 ;
-(void)visible:(id)arg0 start:(id)arg1 duration:(CGFloat)arg2 ;


@end


#endif