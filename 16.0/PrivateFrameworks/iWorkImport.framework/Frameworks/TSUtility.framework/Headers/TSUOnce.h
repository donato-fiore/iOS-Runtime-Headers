// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUONCE_H
#define TSUONCE_H

@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSUOnce : NSObject <NSCopying>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _didPerformOnce;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)performBlockOnce:(id)arg0 ;


@end


#endif