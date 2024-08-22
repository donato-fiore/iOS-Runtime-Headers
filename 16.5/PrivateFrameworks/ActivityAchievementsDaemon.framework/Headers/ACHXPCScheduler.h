// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHXPCSCHEDULER_H
#define ACHXPCSCHEDULER_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface ACHXPCScheduler : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSDate *lastSuccessfulRunDate; // ivar: _lastSuccessfulRunDate
@property (readonly, copy, nonatomic) NSString *lastSuccessfulRunDateKey; // ivar: _lastSuccessfulRunDateKey
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) id *performHandler; // ivar: _performHandler


-(id)initWithName:(id)arg0 performHandler:(id)arg1 ;
-(void)_handleCompletionResult:(BOOL)arg0 error:(id)arg1 activity:(id)arg2 ;
-(void)_handleXPCActivityCallback:(id)arg0 ;
-(void)_performActivity:(id)arg0 ;
-(void)_registerActivity;
-(void)synthesizeActivityFireWithCompletion:(id)arg0 ;


@end


#endif