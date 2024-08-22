// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTEVENTHANDLER_H
#define MTEVENTHANDLER_H

@class NSArray, NSString;
@protocol MTEventHandlerDelegate;


#import "MTEventDataProvider.h"

@interface MTEventHandler : MTEventDataProvider

@property (weak, nonatomic) NSObject<MTEventHandlerDelegate> *delegate;
@property (retain) NSArray *postProcessingBlocks; // ivar: _postProcessingBlocks
@property (retain, nonatomic) NSArray *registeredEventData; // ivar: _registeredEventData
@property (retain, nonatomic) NSString *registeredName; // ivar: _registeredName


+(id)cachableWithKey:(id)arg0 onBackgroundThread:(BOOL)arg1 block:(id)arg2 ;
+(id)currentEventContextCache;
+(void)clearEventContextCache;
+(void)createEventContextCache;
-(BOOL)mtIncludeBaseFields;
-(id)eventType;
-(id)eventVersion:(id)arg0 ;
-(id)knownFields;
-(id)metricsDataWithCallerSuppliedFields:(id)arg0 ;
-(id)metricsDataWithEventData:(id)arg0 ;
-(id)metricsDataWithFields:(id)arg0 ;
-(void)addPostProcessingBlock:(id)arg0 ;
-(void)didCreateMetricsData:(id)arg0 ;


@end


#endif