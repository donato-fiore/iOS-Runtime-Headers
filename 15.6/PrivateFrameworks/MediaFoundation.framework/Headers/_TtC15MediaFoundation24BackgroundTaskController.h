// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15MEDIAFOUNDATION24BACKGROUNDTASKCONTROLLER_H
#define _TTC15MEDIAFOUNDATION24BACKGROUNDTASKCONTROLLER_H

@class SwiftObject, NSDictionary;
@protocol MFResettable, MFStateDumpable;



@interface _TtC15MediaFoundation24BackgroundTaskController : SwiftObject <MFResettable, MFStateDumpable>

 {
    ? provider;
    ? reporter;
    ? tasks;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;


-(void)reset;


@end


#endif