// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE24BACKGROUNDTASKCONTROLLER_H
#define _TTC17MEDIAPLAYBACKCORE24BACKGROUNDTASKCONTROLLER_H

@class SwiftObject, NSDictionary;
@protocol MFResettable, MFStateDumpable;



@interface _TtC17MediaPlaybackCore24BackgroundTaskController : SwiftObject <MFResettable, MFStateDumpable>

 {
    ? provider;
    ? reporter;
    ? tasks;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;


-(void)resetWithReason:(id)arg0 ;


@end


#endif