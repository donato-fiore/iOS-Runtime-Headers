// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKBRTOBJECT_H
#define _UIKBRTOBJECT_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIKBRTObject : NSObject {
    NSMutableArray *_owner;
    NSObject<OS_dispatch_queue> *_syncQueue;
}




-(id)nextEntry;
-(id)owner;
-(id)previousEntry;
-(void)setOwner:(id)arg0 ;


@end


#endif