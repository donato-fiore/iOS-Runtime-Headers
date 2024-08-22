// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTCOALESCABLEWORKMANIFEST_H
#define MTCOALESCABLEWORKMANIFEST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MTCoalescableWorkManifest : NSObject

@property (retain, nonatomic) NSArray *completions; // ivar: _completions
@property (copy, nonatomic) id *workBlock; // ivar: _workBlock


-(id)description;
// -(id)initWithWorkBlock:(id)arg0 completion:(unk)arg1  ;
// -(id)initWithWorkBlock:(id)arg0 completions:(unk)arg1  ;
// -(id)manifestByReplacingWorkBlock:(id)arg0 appendingCompletion:(unk)arg1  ;


@end


#endif