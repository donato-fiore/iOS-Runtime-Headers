// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BPSFLATMAPSIDE_H
#define _BPSFLATMAPSIDE_H

@class NSString;
@protocol BPSSubscriber;

#import <Foundation/Foundation.h>

#import "_BPSFlatMapOuter.h"

@interface _BPSFlatMapSide : NSObject <BPSSubscriber>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger index; // ivar: _index
@property (retain, nonatomic) _BPSFlatMapOuter *outer; // ivar: _outer
@property (readonly) Class superclass;


-(NSInteger)receiveInput:(id)arg0 ;
-(id)initWithIndex:(NSInteger)arg0 outer:(id)arg1 ;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif