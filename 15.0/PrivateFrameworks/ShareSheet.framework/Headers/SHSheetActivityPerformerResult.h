// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSHEETACTIVITYPERFORMERRESULT_H
#define SHSHEETACTIVITYPERFORMERRESULT_H

@class NSError, NSArray;

#import <Foundation/Foundation.h>

#import "UIActivity.h"

@interface SHSheetActivityPerformerResult : NSObject

@property (readonly, nonatomic) UIActivity *activity; // ivar: _activity
@property (nonatomic) NSInteger completedState; // ivar: _completedState
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSArray *returnedItems; // ivar: _returnedItems


-(id)description;
-(id)initWithActivity:(id)arg0 completedState:(NSInteger)arg1 returnedItems:(id)arg2 error:(id)arg3 ;


@end


#endif