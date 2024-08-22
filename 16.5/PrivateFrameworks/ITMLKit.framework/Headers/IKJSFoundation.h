// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSFOUNDATION_H
#define IKJSFOUNDATION_H

@class NSMutableDictionary;
@protocol IKAppDeviceConfig;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"

@interface IKJSFoundation : NSObject

@property (weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) NSMutableDictionary *dateFormatterCache; // ivar: _dateFormatterCache
@property (weak, nonatomic) NSObject<IKAppDeviceConfig> *deviceConfig; // ivar: _deviceConfig
@property (retain, nonatomic) NSMutableDictionary *jsTimers; // ivar: _jsTimers


-(id)_startTimer:(id)arg0 time:(NSInteger)arg1 repeating:(BOOL)arg2 ;
-(id)_stringForKey:(id)arg0 fromDict:(id)arg1 ;
-(id)getCookieForURL:(id)arg0 useSSCookieStorage:(BOOL)arg1 ;
-(id)initWithAppContext:(id)arg0 deviceConfig:(id)arg1 ;
-(id)setInterval:(id)arg0 time:(NSInteger)arg1 ;
-(id)setTimeout:(id)arg0 time:(NSInteger)arg1 ;
-(void)_clearTimer:(id)arg0 ;
-(void)_jsTimerFired:(id)arg0 ;
-(void)clearCookies;
-(void)clearInterval:(id)arg0 ;
-(void)clearTimeout:(id)arg0 ;
-(void)setCookie:(id)arg0 useSSCookieStorage:(BOOL)arg1 ;
-(void)stopTimers;


@end


#endif