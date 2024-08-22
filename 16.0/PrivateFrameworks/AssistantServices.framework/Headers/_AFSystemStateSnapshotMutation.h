// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFSYSTEMSTATESNAPSHOTMUTATION_H
#define _AFSYSTEMSTATESNAPSHOTMUTATION_H

@class NSString;
@protocol AFSystemStateSnapshotMutating;

#import <Foundation/Foundation.h>

#import "AFSystemStateSnapshot.h"

@interface _AFSystemStateSnapshotMutation : NSObject <AFSystemStateSnapshotMutating>

 {
    AFSystemStateSnapshot *_base;
    NSInteger _sleepState;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getSleepState;
-(id)initWithBase:(id)arg0 ;
-(void)setSleepState:(NSInteger)arg0 ;


@end


#endif