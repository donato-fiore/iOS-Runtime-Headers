// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMPROMISE_H
#define IMPROMISE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "IMResult.h"

@interface IMPromise : NSObject {
    IMResult *_result;
    NSMutableArray *_completionBlocks;
}




+(id)all:(id)arg0 ;
-(BOOL)completed;
-(id)initWithError:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(id)then:(id)arg0 ;
-(void)failWithError:(id)arg0 ;
-(void)fullfillWithValue:(id)arg0 ;
-(void)registerCompletionBlock:(id)arg0 ;


@end


#endif