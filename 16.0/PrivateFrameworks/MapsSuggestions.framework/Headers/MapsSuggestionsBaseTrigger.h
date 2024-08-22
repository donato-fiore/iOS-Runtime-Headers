// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSBASETRIGGER_H
#define MAPSSUGGESTIONSBASETRIGGER_H

@class NSString;
@protocol MapsSuggestionsTrigger, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsObservers.h"

@interface MapsSuggestionsBaseTrigger : NSObject <MapsSuggestionsTrigger>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    MapsSuggestionsObservers *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)hasObservers;
-(id)dispatchQueue;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 queue:(id)arg1 ;
-(id)nameForJSON;
-(id)objectForJSON;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)registerObserver:(id)arg0 ;
-(void)triggerMyObservers;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif