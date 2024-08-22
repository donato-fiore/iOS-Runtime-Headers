// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECSERVER_H
#define _DECSERVER_H

@class NSXPCConnection, NSString;
@protocol _DECServer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DECServerResponder.h"
#import "_DECPredictionCache.h"

@interface _DECServer : NSObject <_DECServer>

 {
    _DECServerResponder *_responder;
    _DECPredictionCache *_resultCache;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSUInteger categories; // ivar: _categories
@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)_defaultRestorationDirectory;
+(id)serverWithConnection:(id)arg0 responder:(id)arg1 ;
-(id)_restorationPath;
-(id)initWithConnection:(id)arg0 responder:(id)arg1 ;
-(void)_filterPrediction:(id)arg0 forConsumer:(NSUInteger)arg1 ;
-(void)invalidate;
-(void)predictionForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 criteria:(id)arg2 limit:(NSUInteger)arg3 backgroundQuery:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)predictionForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 criteria:(id)arg2 limit:(NSUInteger)arg3 providesFeedback:(BOOL)arg4 reply:(id)arg5 ;
-(void)predictionForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 limit:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)predictionForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 limit:(NSUInteger)arg2 providesFeedback:(BOOL)arg3 reply:(id)arg4 ;
-(void)prewarmPredictionForCategories:(NSUInteger)arg0 consumer:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)registerClient:(NSInteger)arg0 category:(NSUInteger)arg1 identifier:(id)arg2 reply:(id)arg3 ;
-(void)setPrediction:(id)arg0 category:(NSUInteger)arg1 consumer:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)userAbandoned:(id)arg0 result:(id)arg1 metadata:(id)arg2 reply:(id)arg3 ;
-(void)userEngaged:(id)arg0 result:(id)arg1 metadata:(id)arg2 reply:(id)arg3 ;


@end


#endif