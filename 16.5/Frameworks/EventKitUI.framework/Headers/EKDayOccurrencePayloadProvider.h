// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKDAYOCCURRENCEPAYLOADPROVIDER_H
#define EKDAYOCCURRENCEPAYLOADPROVIDER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EKDayOccurrenceStringGenerator.h"

@interface EKDayOccurrencePayloadProvider : NSObject {
    NSInteger _nextRequestId;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *drawingQueue; // ivar: _drawingQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue; // ivar: _lookupQueue
@property (readonly, nonatomic) NSMutableDictionary *pendingRequests; // ivar: _pendingRequests
@property (readonly, nonatomic) EKDayOccurrenceStringGenerator *stringGenerator; // ivar: _stringGenerator


+(id)backgroundImageCache;
+(id)sharedProvider;
-(NSInteger)requestPayloadForState:(id)arg0 requestOptions:(NSUInteger)arg1 resultHandler:(id)arg2 ;
-(id)_lookupQueue_activeRequestForId:(NSInteger)arg0 ;
-(id)_renderBackgroundImageForState:(id)arg0 barColor:(id)arg1 backgroundColor:(id)arg2 colorBarStyle:(NSInteger)arg3 ;
-(id)_renderBackgroundImageWithState:(id)arg0 ;
-(id)_renderColorBlockImageWithState:(id)arg0 barColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(CGFloat)arg4 colorBarStyle:(NSInteger)arg5 ;
-(id)_renderColorBlockImageWithState:(id)arg0 colorBarStyle:(NSInteger)arg1 ;
-(id)_renderDarkColorBlockImageWithState:(id)arg0 colorBarStyle:(NSInteger)arg1 ;
-(id)_renderLightColorBlockImageWithState:(id)arg0 colorBarStyle:(NSInteger)arg1 ;
-(id)_renderLightSelectedColorBlockImageWithState:(id)arg0 colorBarStyle:(NSInteger)arg1 ;
-(id)_renderLightUnselectedColorBlockImageWithState:(id)arg0 colorBarStyle:(NSInteger)arg1 ;
-(id)_renderTextImageWithState:(id)arg0 ;
-(id)_renderTravelTimeImageWithState:(id)arg0 ;
-(id)init;
-(void)_lookupQueue_enqueueRequest:(id)arg0 ;
-(void)_lookupQueue_removeRequestId:(NSInteger)arg0 ;
-(void)_renderRequestId:(NSInteger)arg0 ;
-(void)_scheduleRequestId:(NSInteger)arg0 ;
-(void)cancelRequest:(NSInteger)arg0 ;


@end


#endif