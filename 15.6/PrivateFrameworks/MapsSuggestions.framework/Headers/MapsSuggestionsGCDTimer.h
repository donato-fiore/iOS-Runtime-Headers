// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSGCDTIMER_H
#define MAPSSUGGESTIONSGCDTIMER_H

@class NSString;
@protocol MapsSuggestionsTimer;


#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsGCDTimer : MapsSuggestionsBaseTrigger <MapsSuggestionsTimer>

 {
    Timer _timer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)initWithName:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)objectForJSON;
-(void)dealloc;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)scheduleWithInterval:(struct Duration )arg0 leeway:(struct Duration )arg1 ;
-(void)scheduleWithInterval:(struct Duration )arg0 repeatAfter:(struct Duration )arg1 leeway:(struct Duration )arg2 ;
-(void)scheduleWithTimeInterval:(CGFloat)arg0 leeway:(CGFloat)arg1 ;
-(void)scheduleWithTimeInterval:(CGFloat)arg0 repeatAfter:(CGFloat)arg1 leeway:(CGFloat)arg2 ;
-(void)unschedule;


@end


#endif