// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSTATEMACHINECANCELTOKEN_H
#define PFSTATEMACHINECANCELTOKEN_H


#import <Foundation/Foundation.h>


@interface PFStateMachineCancelToken : NSObject {
    BOOL _isCancelled;
}




-(BOOL)isCancelled;
-(void)cancel;


@end


#endif