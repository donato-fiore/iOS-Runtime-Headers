// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSCREENUNLOCKUPDATESOURCE_H
#define ATXSCREENUNLOCKUPDATESOURCE_H

@class ATXCoreDuetContextHelper;
@protocol ATXUpdatePredictionsSource, ATXUpdatePredictionsDelegate, ATXPredictionContextBuilderProtocol;

#import <Foundation/Foundation.h>


@interface ATXScreenUnlockUpdateSource : NSObject <ATXUpdatePredictionsSource>



@property (retain, nonatomic) ATXCoreDuetContextHelper *contextHelper; // ivar: _contextHelper
@property (weak, nonatomic) NSObject<ATXUpdatePredictionsDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<ATXPredictionContextBuilderProtocol> *predictionContextBuilder; // ivar: _predictionContextBuilder


-(id)init;
-(id)initWithContextHelper:(id)arg0 predictionContextBuilder:(id)arg1 ;
-(void)_handleScreenUnlockEvent;
-(void)_listenForScreenUnlock;


@end


#endif