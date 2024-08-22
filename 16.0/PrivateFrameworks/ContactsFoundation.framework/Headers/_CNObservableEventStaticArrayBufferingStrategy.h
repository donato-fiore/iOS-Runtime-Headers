// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNOBSERVABLEEVENTSTATICARRAYBUFFERINGSTRATEGY_H
#define _CNOBSERVABLEEVENTSTATICARRAYBUFFERINGSTRATEGY_H

@class CNObservableEventBufferingStrategy, NSArray;



@interface _CNObservableEventStaticArrayBufferingStrategy : CNObservableEventBufferingStrategy

@property (readonly, nonatomic) NSArray *events; // ivar: _events


-(BOOL)isSequenceTerminated;
-(id)allEvents;
-(id)initWithEvents:(id)arg0 ;
-(void)addEvent:(id)arg0 ;


@end


#endif