// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXANALYTICSMANAGER_H
#define CFXANALYTICSMANAGER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;


#import "JFXAnalyticsManager.h"
#import "CFXPickerSession.h"

@interface CFXAnalyticsManager : JFXAnalyticsManager {
    NSObject<OS_dispatch_queue> *_queryDataQueue;
}


@property (retain, nonatomic) NSMutableArray *analyticsDurationData_queryDataQueue; // ivar: _analyticsDurationData_queryDataQueue
@property (retain, nonatomic) CFXPickerSession *currentPickerSession; // ivar: _currentPickerSession


+(id)sharedInstance;
-(BOOL)checkIfEventExistsWithName:(id)arg0 ;
-(BOOL)isDistribution:(id)arg0 ;
-(BOOL)isIncrementScalar:(id)arg0 ;
-(NSUInteger)roundWithNumber:(NSUInteger)arg0 ;
-(id)CFX_allowedPickerIdentifier:(id)arg0 ;
-(id)CFX_composedAnalyticsKeyWithAnimoji:(BOOL)arg0 video:(BOOL)arg1 frontCamera:(BOOL)arg2 effectType:(id)arg3 ;
-(id)analyticsDurationData;
-(id)dictionaryWithEventName:(id)arg0 value:(CGFloat)arg1 ;
-(id)init;
-(void)addAnalyticsDurationData:(id)arg0 ;
-(void)didSelectEffectOfType:(id)arg0 effectIsNone:(BOOL)arg1 ;
-(void)persistAnalyticsDataWithEventName:(id)arg0 value:(CGFloat)arg1 ;
-(void)pickerDidChangePresentationMode;
-(void)pickerDidScroll;
-(void)removeAnalyticsDurationDataItems:(id)arg0 ;
-(void)startTrackingPickerWithIdentifier:(id)arg0 ;
-(void)startTrackingTimeIntervalEventWithName:(id)arg0 ;
-(void)stopTrackingPickerWithIdentifier:(id)arg0 ;
-(void)stopTrackingTimeIntervalEventWithName:(id)arg0 ;
-(void)trackAnimojiWithEffectId:(id)arg0 ;
-(void)trackEffect:(id)arg0 ;
-(void)trackEmojiStickerWithEffectId:(id)arg0 ;
-(void)trackEventWithName:(id)arg0 ;
-(void)trackEventWithName:(id)arg0 count:(NSUInteger)arg1 ;
-(void)trackEventWithName:(id)arg0 duration:(CGFloat)arg1 ;
-(void)trackEventWithName:(id)arg0 supportsHDR:(BOOL)arg1 isHDR:(BOOL)arg2 ;
-(void)trackFilterWithEffectId:(id)arg0 ;
-(void)trackKey:(id)arg0 supportsHDR:(BOOL)arg1 isHDR:(BOOL)arg2 ;
-(void)trackKey:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)trackKey:(id)arg0 withEffectId:(id)arg1 ;
-(void)trackLabelWithEffectId:(id)arg0 ;
-(void)trackMediaSentWithAnimoji:(BOOL)arg0 video:(BOOL)arg1 frontCamera:(BOOL)arg2 filterCount:(NSUInteger)arg3 labelCount:(NSUInteger)arg4 messagesStickerCount:(NSUInteger)arg5 shapeCount:(NSUInteger)arg6 emojiStickerCount:(NSUInteger)arg7 supportsHDR:(BOOL)arg8 isHDR:(BOOL)arg9 ;
-(void)trackMessagesStickerWithEffectId:(id)arg0 ;
-(void)trackShapeWithEffectId:(id)arg0 ;


@end


#endif