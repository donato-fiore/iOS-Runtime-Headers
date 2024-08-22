// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSXPCACTIVITYTIMER_H
#define MAPSSUGGESTIONSXPCACTIVITYTIMER_H

@class NSString, NSDate;
@protocol MapsSuggestionsTimer, OS_dispatch_queue;


#import "MapsSuggestionsBaseTrigger.h"

@interface MapsSuggestionsXPCActivityTimer : MapsSuggestionsBaseTrigger <MapsSuggestionsTimer>

 {
    id *_block;
    NSString *_activityIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_firesAt;
    NSUInteger _estimatedDownloadInBytes;
    NSUInteger _estimatedUploadInBytes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)initWithName:(id)arg0 estinatedDownload:(NSUInteger)arg1 estinatedUpload:(NSUInteger)arg2 queue:(id)arg3 block:(id)arg4 ;
-(id)initWithName:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)objectForJSON;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(void)scheduleWithInterval:(struct Duration )arg0 leeway:(struct Duration )arg1 ;
-(void)scheduleWithInterval:(struct Duration )arg0 repeatAfter:(struct Duration )arg1 leeway:(struct Duration )arg2 ;
-(void)scheduleWithTimeInterval:(CGFloat)arg0 leeway:(CGFloat)arg1 ;
-(void)scheduleWithTimeInterval:(CGFloat)arg0 repeatAfter:(CGFloat)arg1 leeway:(CGFloat)arg2 ;
-(void)unschedule;


@end


#endif