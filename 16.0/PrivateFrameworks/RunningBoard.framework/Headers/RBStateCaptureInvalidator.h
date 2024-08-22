// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSTATECAPTUREINVALIDATOR_H
#define RBSTATECAPTUREINVALIDATOR_H

@class NSString;
@protocol RBSInvalidatable;

#import <Foundation/Foundation.h>


@interface RBStateCaptureInvalidator : NSObject <RBSInvalidatable>

 {
    NSUInteger _handle;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)invalidate;


@end


#endif