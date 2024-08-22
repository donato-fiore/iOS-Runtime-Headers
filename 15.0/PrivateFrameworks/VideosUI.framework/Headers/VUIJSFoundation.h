// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIJSFOUNDATION_H
#define VUIJSFOUNDATION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "VUIAppContext.h"

@interface VUIJSFoundation : NSObject

@property (weak, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) NSMutableDictionary *dateFormatterCache; // ivar: _dateFormatterCache
@property (retain, nonatomic) NSMutableDictionary *jsTimers; // ivar: _jsTimers


-(id)_startTimer:(id)arg0 time:(NSInteger)arg1 repeating:(BOOL)arg2 ;
-(id)initWithAppContext:(id)arg0 ;
-(id)setInterval:(id)arg0 time:(NSInteger)arg1 ;
-(id)setTimeout:(id)arg0 time:(NSInteger)arg1 ;
-(void)_clearTimer:(id)arg0 ;
-(void)_jsTimerFired:(id)arg0 ;
-(void)clearInterval:(id)arg0 ;
-(void)clearTimeout:(id)arg0 ;
-(void)stopTimers;


@end


#endif