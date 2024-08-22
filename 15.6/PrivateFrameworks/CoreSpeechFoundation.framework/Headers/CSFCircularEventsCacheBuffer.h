// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSFCIRCULAREVENTSCACHEBUFFER_H
#define CSFCIRCULAREVENTSCACHEBUFFER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CSFCircularEventsCacheBuffer : NSObject {
    NSInteger _lastEventIndex;
}


@property (readonly, nonatomic) NSMutableArray *eventsArray; // ivar: _eventsArray


-(id)init;
-(void)addEventToCacheBuffer:(id)arg0 ;
-(void)clearBuffer;


@end


#endif