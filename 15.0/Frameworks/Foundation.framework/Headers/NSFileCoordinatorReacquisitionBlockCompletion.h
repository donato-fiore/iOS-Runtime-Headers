// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILECOORDINATORREACQUISITIONBLOCKCOMPLETION_H
#define NSFILECOORDINATORREACQUISITIONBLOCKCOMPLETION_H

@protocol NSFileCoordinationRetainedAccess, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSFileCoordinatorReacquisitionBlockCompletion : NSObject <NSFileCoordinationRetainedAccess>

 {
    NSObject<OS_dispatch_group> *group;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// +(id)completionWithBlock:(id)arg0 queue:(unk)arg1  ;
-(void)dealloc;
-(void)decrement;
-(void)increment;


@end


#endif