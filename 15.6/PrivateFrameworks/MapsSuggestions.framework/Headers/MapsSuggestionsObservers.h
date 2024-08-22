// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSOBSERVERS_H
#define MAPSSUGGESTIONSOBSERVERS_H

@class NSString, NSHashTable;
@protocol MapsSuggestionsObject;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsObservers : NSObject <MapsSuggestionsObject>

 {
    NSString *_name;
    Queue _callbackQueue;
    NSHashTable *_innerObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)callBlock:(id)arg0 ;
-(BOOL)synchronouslyCallBlock:(id)arg0 ;
-(NSUInteger)count;
-(id)init;
-(id)initWithCallbackQueue:(id)arg0 name:(id)arg1 ;
-(id)initWithCallbackQueue:(id)arg0 name:(id)arg1 strong:(BOOL)arg2 ;
-(id)initWithName:(id)arg0 ;
-(void)registerObserver:(id)arg0 handler:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 handler:(id)arg1 ;


@end


#endif