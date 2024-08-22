// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REBLOCKSENTINEL_H
#define REBLOCKSENTINEL_H


#import <Foundation/Foundation.h>


@interface REBlockSentinel : NSObject

@property (getter=isCompleted) BOOL completed; // ivar: _completed
@property (readonly, nonatomic) id *failureBlock; // ivar: _failureBlock


-(id)init;
-(id)initWithFailureBlock:(id)arg0 ;
-(void)complete;
-(void)dealloc;


@end


#endif