// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSCIRCUITBOARD_H
#define MAPSSUGGESTIONSCIRCUITBOARD_H

@class NSString;
@protocol MapsSuggestionsJSONable;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsCircuitBoard : NSObject <MapsSuggestionsJSONable>

 {
    Queue _queue;
    _Config _config;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)addAction:(id)arg0 ;
-(id)addCircuit:(id)arg0 ;
-(id)addCondition:(id)arg0 ;
-(id)addTrigger:(id)arg0 ;
-(id)init;
-(id)nameForJSON;
-(id)objectForJSON;
-(id)uniqueName;
-(void)awaitQueue;
-(void)connectCondition:(id)arg0 toCircuit:(id)arg1 ;
-(void)connectTrigger:(id)arg0 toCircuit:(id)arg1 ;
-(void)disconnectCondition:(id)arg0 fromCircuit:(id)arg1 ;
-(void)disconnectTrigger:(id)arg0 fromCircuit:(id)arg1 ;


@end


#endif