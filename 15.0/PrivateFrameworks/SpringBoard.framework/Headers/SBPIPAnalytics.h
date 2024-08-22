// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPANALYTICS_H
#define SBPIPANALYTICS_H

@class NSMutableDictionary, NSString;
@protocol PGPictureInPictureAnalyticsDelegate;

#import <Foundation/Foundation.h>


@interface SBPIPAnalytics : NSObject <PGPictureInPictureAnalyticsDelegate>

 {
    NSMutableDictionary *_analyticsSourceAssistants;
    NSMutableDictionary *_analyticsSessionAssistants;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assistantForUUID:(id)arg0 ;
-(void)pictureInPictureAnalyticsSourceWithUUID:(id)arg0 didBecomePossible:(BOOL)arg1 ;
-(void)pictureInPictureDidActivateAnalyticsSessionWithUUID:(id)arg0 analyticsSourceUUID:(id)arg1 automatically:(BOOL)arg2 ;
-(void)pictureInPictureDidChangeStashStateForAnalyticsSessionWithUUID:(id)arg0 stashed:(BOOL)arg1 ;
-(void)pictureInPictureDidCreateAnalyticsSessionWithUUID:(id)arg0 bundleIdentifier:(id)arg1 contentType:(NSInteger)arg2 ;
-(void)pictureInPictureDidCreateAnalyticsSourceWithUUID:(id)arg0 bundleIdentifier:(id)arg1 contentType:(NSInteger)arg2 ;
-(void)pictureInPictureDidDeactivateAnalyticsSessionWithUUID:(id)arg0 analyticsSourceUUID:(id)arg1 appStoppedSession:(BOOL)arg2 restoredFullScreen:(BOOL)arg3 ;
-(void)pictureInPictureDidDestroyAnalyticsSessionWithUUID:(id)arg0 ;
-(void)pictureInPictureDidDestroyAnalyticsSourceWithUUID:(id)arg0 ;


@end


#endif