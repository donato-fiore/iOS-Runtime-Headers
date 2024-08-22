// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSCANKICKER_H
#define MAPSSUGGESTIONSCANKICKER_H

@class NSString;
@protocol MapsSuggestionsObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsGCDTimer.h"

@interface MapsSuggestionsCanKicker : NSObject <MapsSuggestionsObject>

 {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSString *_name;
    id *_block;
    CGFloat _time;
    CGFloat _leeway;
    MapsSuggestionsGCDTimer *_timer;
    NSUInteger _count;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)initWithName:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)initWithName:(id)arg0 time:(CGFloat)arg1 leeway:(CGFloat)arg2 queue:(id)arg3 block:(id)arg4 ;
-(id)initWithName:(id)arg0 time:(CGFloat)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)kickCanBySameTime;
-(void)kickCanByTime:(CGFloat)arg0 ;


@end


#endif