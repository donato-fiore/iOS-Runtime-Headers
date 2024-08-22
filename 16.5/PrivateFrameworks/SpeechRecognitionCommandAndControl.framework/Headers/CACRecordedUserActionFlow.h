// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACRECORDEDUSERACTIONFLOW_H
#define CACRECORDEDUSERACTIONFLOW_H

@class NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CACRecordedUserActionFlow : NSObject <NSSecureCoding>

 {
    NSArray *_tasks;
    NSDictionary *_environmentSettings;
    NSMutableDictionary *_orignalEnvironmentSettings;
    NSInteger _executingTaskIndex;
    BOOL _isExecuting;
    BOOL _isCancelled;
}


@property (retain) NSString *identifier; // ivar: _identifier
@property BOOL skipNextAction; // ivar: _skipNextAction
@property (readonly) NSArray *userActions;


+(BOOL)supportsSecureCoding;
-(BOOL)doesNextSpokenCommandMatchIdentifier:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserActions:(id)arg0 ;
-(id)plistDescription;
-(void)_configureEnvironment;
-(void)_executeNextActionWithCompletionBlock:(id)arg0 ;
-(void)_exitFlowWithError:(id)arg0 completionBlock:(id)arg1 ;
-(void)_restoreEnvironment;
-(void)beginExecutingWithCompletionBlock:(id)arg0 ;
-(void)cancelExecution;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif