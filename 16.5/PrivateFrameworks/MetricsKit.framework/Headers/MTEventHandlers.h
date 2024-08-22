// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTEVENTHANDLERS_H
#define MTEVENTHANDLERS_H

@class NSMutableDictionary;


#import "MTObject.h"
#import "MTBaseEventDataProvider.h"

@interface MTEventHandlers : MTObject

@property (retain, nonatomic) MTBaseEventDataProvider *base; // ivar: _base
@property (retain, nonatomic) NSMutableDictionary *registrations; // ivar: _registrations


-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)registerDefaultEventHandlers;
-(void)registerEventHandlerName:(id)arg0 eventData:(id)arg1 ;
-(void)registerEventHandlerName:(id)arg0 eventHandlerClass:(Class)arg1 ;
-(void)registerEventHandlerName:(id)arg0 eventHandlerClass:(Class)arg1 eventData:(id)arg2 ;


@end


#endif