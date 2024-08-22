// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIDECARMUTABLEITEM_H
#define SIDECARMUTABLEITEM_H

@class NSMutableData;


#import "SidecarItem.h"

@interface SidecarMutableItem : SidecarItem {
    NSMutableData *_mutableData;
    NSUInteger _capacity;
    BOOL _complete;
}


@property (readonly, getter=isComplete) BOOL complete;


-(BOOL)appendData:(id)arg0 ;
-(id)data;
-(id)initWithType:(id)arg0 capacity:(NSUInteger)arg1 ;


@end


#endif