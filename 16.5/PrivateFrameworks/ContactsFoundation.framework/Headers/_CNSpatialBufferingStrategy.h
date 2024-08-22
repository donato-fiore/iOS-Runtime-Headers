// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNSPATIALBUFFERINGSTRATEGY_H
#define _CNSPATIALBUFFERINGSTRATEGY_H

@class NSString;
@protocol _CNBufferingStrategy;

#import <Foundation/Foundation.h>


@interface _CNSpatialBufferingStrategy : NSObject <_CNBufferingStrategy>

 {
    NSUInteger _capacity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)buffer:(id)arg0 didReceiveResults:(id)arg1 forObserver:(id)arg2 ;
-(void)bufferDidSendResults:(id)arg0 ;


@end


#endif