// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBCEMODULE_H
#define CBCEMODULE_H

@class NSMutableDictionary, NSString;
@protocol CBContainerModuleProtocol;


#import "CBModule.h"

@interface CBCEModule : CBModule <CBContainerModuleProtocol>

 {
    NSMutableDictionary *_alsEvents;
    NSMutableDictionary *_currentInputDict;
    NSMutableDictionary *_currentOutputDict;
    id *_model;
    id *_overriddenInput;
    id *_currentInput;
    BOOL _overriding;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property Class modelClass; // ivar: _modelClass
@property Class modelInputClass; // ivar: _modelInputClass
@property (readonly) Class superclass;


-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)copyInference:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ceModelID:(unsigned int)arg1 ;
-(id)setModelInputWithAlsEvent:(id)arg0 ceInput:(id)arg1 ;
-(id)setModelInputWithXtalkArr:(id)arg0 alsArr:(id)arg1 alsRatioArr:(id)arg2 X:(CGFloat)arg3 Y:(CGFloat)arg4 Z:(CGFloat)arg5 CCT:(CGFloat)arg6 u:(CGFloat)arg7 v:(CGFloat)arg8 lux:(CGFloat)arg9 nits:(CGFloat)arg10 iTime:(CGFloat)arg11 gain:(CGFloat)arg12 x:(CGFloat)arg13 y:(CGFloat)arg14 a:(CGFloat)arg15 b:(CGFloat)arg16 ceInput:(id)arg17 ;
-(void)dealloc;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)sendNotificationForKey:(id)arg0 withValue:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif