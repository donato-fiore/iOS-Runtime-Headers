// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSERVICECOMMANDRESULT_H
#define SVXSERVICECOMMANDRESULT_H

@class NSString, AceObject<SAAceCommand>, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SVXServiceCommandResult : NSObject <NSCopying>

 {
    NSInteger _type;
    NSInteger _failureErrorCode;
    NSString *_failureReason;
    AceObject<SAAceCommand> *_command;
    NSArray *_results;
}




+(id)resultFailureWithErrorCode:(NSInteger)arg0 reason:(id)arg1 ;
+(id)resultIgnored;
+(id)resultSuccess;
+(id)resultWithCommand:(id)arg0 ;
+(id)resultWithResults:(id)arg0 ;
// -(BOOL)handleResultUsingIgnoredBlock:(id)arg0 successBlock:(unk)arg1 failureBlock:(id)arg2 commandBlock:(unk)arg3  ;
-(id)_initWithType:(NSInteger)arg0 failureErrorCode:(NSInteger)arg1 failureReason:(id)arg2 command:(id)arg3 results:(id)arg4 ;
-(id)_optimalResult;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif