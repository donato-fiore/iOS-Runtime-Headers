// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EXPERTSYSTEMHANDLERCORE_H
#define EXPERTSYSTEMHANDLERCORE_H

@class NSMutableDictionary, NSString;
@protocol ConfigurableObjectProtocol, SymptomAdditionalProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ExpertSystemHandlerCore : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>

 {
    NSMutableDictionary *_activeTimers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)internalStateDictionary;
-(BOOL)noteSymptom:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)cancelAllTimers;
-(void)cancelTimerWithIdentifier:(id)arg0 ;
-(void)dealloc;
// -(void)scheduleTimerFor:(NSUInteger)arg0 leeway:(NSUInteger)arg1 identifier:(id)arg2 queue:(id)arg3 eventHandler:(id)arg4 cancelHandler:(unk)arg5  ;


@end


#endif