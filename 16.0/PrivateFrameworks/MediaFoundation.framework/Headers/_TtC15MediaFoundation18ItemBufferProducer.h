// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15MEDIAFOUNDATION18ITEMBUFFERPRODUCER_H
#define _TTC15MEDIAFOUNDATION18ITEMBUFFERPRODUCER_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable;



@interface _TtC15MediaFoundation18ItemBufferProducer : SwiftObject <MFStateDumpable>

 {
    ? maximumBufferLength;
    ? hasReachedQueueEnd;
    ? consumer;
    ? buffer;
    ? dataSource;
    ? reporter;
    ? cursor;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;




@end


#endif