// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILECOORDINATORACCESSORBLOCKCOMPLETION_H
#define NSFILECOORDINATORACCESSORBLOCKCOMPLETION_H

@protocol NSFileCoordinationRetainedAccess;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSFileCoordinatorAccessorBlockCompletion : NSObject <NSFileCoordinationRetainedAccess>

 {
    id *block;
    uint8_t count;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)completionWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)decrement;
-(void)increment;


@end


#endif