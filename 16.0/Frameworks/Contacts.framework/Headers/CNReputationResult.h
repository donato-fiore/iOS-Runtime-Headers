// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNREPUTATIONRESULT_H
#define CNREPUTATIONRESULT_H


#import <Foundation/Foundation.h>

#import "CNReputationHandle.h"

@interface CNReputationResult : NSObject

@property (readonly, copy) CNReputationHandle *handle; // ivar: _handle
@property (readonly) NSInteger score; // ivar: _score


+(id)descriptionForScore:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithHandle:(id)arg0 score:(NSInteger)arg1 ;


@end


#endif