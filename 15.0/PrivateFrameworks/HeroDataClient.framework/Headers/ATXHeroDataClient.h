// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXHERODATACLIENT_H
#define ATXHERODATACLIENT_H

@class NSXPCConnection;
@protocol ATXHeroDataXPCInterface;

#import <Foundation/Foundation.h>


@interface ATXHeroDataClient : NSObject <ATXHeroDataXPCInterface>

 {
    NSXPCConnection *_xpcConnection;
}




-(id)init;
-(void)addConfirmForAppClipWithHeroAppPrediction:(id)arg0 completion:(id)arg1 ;
-(void)addHardRejectForAppClipWithHeroAppPrediction:(id)arg0 completion:(id)arg1 ;
-(void)addSoftRejectForAppClipWithHeroAppPrediction:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)donateHeroAppPredictions:(id)arg0 completion:(id)arg1 ;
-(void)feedbackScoreForAppClipWithHeroAppPrediction:(id)arg0 completion:(id)arg1 ;
-(void)getCurrentHeroPoiCategoryWithCompletion:(id)arg0 ;
-(void)openAppClipWithHeroAppPrediction:(id)arg0 completion:(id)arg1 ;


@end


#endif