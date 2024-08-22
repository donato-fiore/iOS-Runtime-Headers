// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REAUDIOMANAGERCANCELLABLE_H
#define _REAUDIOMANAGERCANCELLABLE_H


#import <Foundation/Foundation.h>


@interface _REAudioManagerCancellable : NSObject {
    atomic<bool> _cancelled;
}


@property (readonly, getter=isCancelled) BOOL cancelled;


-(id)init;
-(void)cancel;


@end


#endif