// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFKEYVALUESTORE_H
#define CWFKEYVALUESTORE_H

@class NSUbiquitousKeyValueStore, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CWFKeyValueStore : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSUbiquitousKeyValueStore *_ubiquitousKVS;
}


@property (nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (copy) id *eventHandler; // ivar: _eventHandler
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (copy) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly) NSInteger type; // ivar: _type


-(BOOL)__synchronize;
-(BOOL)synchronize;
-(id)__debugDescriptionForType:(NSInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(void)__ubiquitousKVSChanged:(id)arg0 ;
-(void)activate;
-(void)addEntriesFromDictionary:(id)arg0 ;
-(void)invalidate;
-(void)removeAllEntries;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif