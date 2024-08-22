// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFCANCELLATIONHANDLER_H
#define HMFCANCELLATIONHANDLER_H

@protocol HMFCancellable;


#import "HMFObject.h"

@interface HMFCancellationHandler : HMFObject <HMFCancellable>

 {
    id *_block;
}




-(id)initWithBlock:(id)arg0 ;
-(void)cancel;


@end


#endif