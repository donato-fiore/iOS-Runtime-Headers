// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASHEATER_H
#define SASHEATER_H

@class NSTimer;
@protocol SASHeaterDelegate;

#import <Foundation/Foundation.h>


@interface SASHeater : NSObject

@property (weak, nonatomic) NSObject<SASHeaterDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL predictedRecordRouteIsZLL; // ivar: _predictedRecordRouteIsZLL
@property (nonatomic) CGFloat preheatTimeInterval; // ivar: _preheatTimeInterval
@property (retain, nonatomic) NSTimer *preheatTimer; // ivar: _preheatTimer
@property (nonatomic, getter=_preparationStartTime, setter=_setPreparationStartTime:) CGFloat preparationStartTime; // ivar: _preparationStartTime


-(id)_convertVirtualAudioSubTypeToString:(unsigned int)arg0 ;
-(void)_cancelPreparation;
-(void)_suggestPreheat;
-(void)cancelPreparationForButtonIdentifier:(NSInteger)arg0 ;
-(void)prepareForUseAfterTimeInterval:(CGFloat)arg0 ;
-(void)updatePredictedRouteIsZLL;


@end


#endif