// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSPARTIALCOMPLETION_H
#define BPSPARTIALCOMPLETION_H

@class NSError;

#import <Foundation/Foundation.h>


@interface BPSPartialCompletion : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)new;
+(id)withState:(NSInteger)arg0 ;
+(id)withState:(NSInteger)arg0 error:(id)arg1 ;
+(id)withState:(NSInteger)arg0 value:(id)arg1 ;
-(id)init;
-(id)initWithState:(NSInteger)arg0 value:(id)arg1 error:(id)arg2 ;


@end


#endif