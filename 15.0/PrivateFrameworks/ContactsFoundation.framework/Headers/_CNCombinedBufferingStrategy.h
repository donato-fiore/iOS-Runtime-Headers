// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNCOMBINEDBUFFERINGSTRATEGY_H
#define _CNCOMBINEDBUFFERINGSTRATEGY_H

@class NSArray, NSString;
@protocol _CNBufferingStrategy;

#import <Foundation/Foundation.h>


@interface _CNCombinedBufferingStrategy : NSObject <_CNBufferingStrategy>

 {
    NSArray *_strategies;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStrategies:(id)arg0 ;
-(void)buffer:(id)arg0 didReceiveResults:(id)arg1 forObserver:(id)arg2 ;
-(void)bufferDidSendResults:(id)arg0 ;
-(void)eachStrategy:(id)arg0 ;


@end


#endif