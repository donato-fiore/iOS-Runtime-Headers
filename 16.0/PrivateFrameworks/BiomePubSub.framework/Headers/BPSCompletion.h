// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSCOMPLETION_H
#define BPSCOMPLETION_H

@class NSError;

#import <Foundation/Foundation.h>


@interface BPSCompletion : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger state; // ivar: _state


+(id)failureWithError:(id)arg0 ;
+(id)new;
+(id)success;
-(id)description;
-(id)init;
-(id)initWithState:(NSInteger)arg0 error:(id)arg1 ;


@end


#endif