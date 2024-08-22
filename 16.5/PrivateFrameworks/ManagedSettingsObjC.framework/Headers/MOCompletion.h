// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOCOMPLETION_H
#define MOCOMPLETION_H

@class NSError;

#import <Foundation/Foundation.h>


@interface MOCompletion : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


+(id)failureWithError:(id)arg0 ;
+(id)success;
-(id)initWithState:(NSUInteger)arg0 error:(id)arg1 ;


@end


#endif