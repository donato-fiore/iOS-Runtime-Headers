// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSMEMORYCACHEACCESSQUEUE_H
#define TSMEMORYCACHEACCESSQUEUE_H

@protocol TSMemoryCacheAccessorType;

#import <Foundation/Foundation.h>


@interface TSMemoryCacheAccessQueue : NSObject <TSMemoryCacheAccessorType>

 {
    ? accessQueue;
}




-(id)accessValueWithBlock:(id)arg0 ;
-(id)init;
-(void)accessWithBlock:(id)arg0 ;


@end


#endif