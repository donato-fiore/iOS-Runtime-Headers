// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFOBSERVABLERESULT_H
#define WFOBSERVABLERESULT_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFObservableResult : NSObject

@property (readonly, nonatomic) CGSize glyphSize; // ivar: _glyphSize
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerNotificationQueue; // ivar: _observerNotificationQueue
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL observingDistributedNotifications; // ivar: _observingDistributedNotifications
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) Class valueType; // ivar: _valueType


+(void)drawGlyphsIntoWorkflowsIfNecessary:(id)arg0 glyphSize:(struct CGSize )arg1 ;
+(void)drawGlyphsIntoWorkflowsIfNecessary:(id)arg0 glyphSize:(struct CGSize )arg1 completion:(id)arg2 ;
+(void)drawGlyphsIntoWorkflowsIfNecessary:(id)arg0 glyphSize:(struct CGSize )arg1 roundedIcon:(BOOL)arg2 synchronously:(BOOL)arg3 completion:(id)arg4 ;
-(id)initWithValueType:(Class)arg0 glyphSize:(struct CGSize )arg1 ;
-(void)addResultObserver:(id)arg0 ;
-(void)databaseDidChange:(id)arg0 ;
-(void)dealloc;
-(void)handleChangeNotification:(id)arg0 ;
-(void)removeResultObserver:(id)arg0 ;
-(void)startConnectionIfNecessary;
-(void)stopConnection;


@end


#endif