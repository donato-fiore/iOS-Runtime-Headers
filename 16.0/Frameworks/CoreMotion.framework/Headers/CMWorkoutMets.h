// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMWORKOUTMETS_H
#define CMWORKOUTMETS_H


#import <Foundation/Foundation.h>

#import "CMWorkoutMetsInternal.h"

@interface CMWorkoutMets : NSObject

@property (readonly, nonatomic) CMWorkoutMetsInternal *_internal; // ivar: _internal


+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(void)queryWorkoutMetsWithSessionId:(id)arg0 handler:(id)arg1 ;


@end


#endif