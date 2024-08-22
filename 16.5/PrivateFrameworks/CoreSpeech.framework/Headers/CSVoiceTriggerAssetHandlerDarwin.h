// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERASSETHANDLERDARWIN_H
#define CSVOICETRIGGERASSETHANDLERDARWIN_H

@class CSAsset, NSString;
@protocol CSRemoteAssetManagerDelegate, CSLanguageCodeUpdateMonitorDelegate;


#import "CSVoiceTriggerAssetHandler.h"

@interface CSVoiceTriggerAssetHandlerDarwin : CSVoiceTriggerAssetHandler <CSRemoteAssetManagerDelegate, CSLanguageCodeUpdateMonitorDelegate>



@property (retain) CSAsset *cachedAsset; // ivar: _cachedAsset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)CSLanguageCodeUpdateMonitor:(id)arg0 didReceiveLanguageCodeChanged:(id)arg1 ;
-(void)CSRemoteAssetManagerDidDownloadNewAsset:(id)arg0 ;
-(void)_checkNewAssetAvailablity;
-(void)_getVoiceTriggerAssetFromAssetManager:(id)arg0 ;
-(void)getVoiceTriggerAssetWithEndpointId:(id)arg0 completion:(id)arg1 ;
-(void)start;


@end


#endif