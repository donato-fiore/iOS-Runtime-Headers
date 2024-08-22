// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15MEDIAFOUNDATION17USEREVENTSMONITOR_H
#define _TTC15MEDIAFOUNDATION17USEREVENTSMONITOR_H

@class SwiftObject, NSDictionary;
@protocol MFResettable, MFStateDumpable;



@interface _TtC15MediaFoundation17UserEventsMonitor : SwiftObject <MFResettable, MFStateDumpable>

 {
    ? timeout;
    ? delegate;
    ? monitors;
    ? reporter;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;


-(void)reset;


@end


#endif