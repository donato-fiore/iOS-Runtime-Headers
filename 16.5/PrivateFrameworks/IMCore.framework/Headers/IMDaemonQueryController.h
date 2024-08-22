// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDAEMONQUERYCONTROLLER_H
#define IMDAEMONQUERYCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "IMDaemonController.h"

@interface IMDaemonQueryController : NSObject

@property (readonly, weak, nonatomic) IMDaemonController *daemonController; // ivar: _daemonController
@property (readonly, nonatomic) NSMutableDictionary *queries; // ivar: _queries


-(id)initWithDaemonController:(id)arg0 ;
-(void)_completeQuery:(id)arg0 success:(BOOL)arg1 error:(id)arg2 userInfo:(id)arg3 ;
-(void)_daemonDisconnected:(id)arg0 ;
-(void)_validateOutstandingQueries;
-(void)completeQuery:(id)arg0 ;
-(void)completeQuery:(id)arg0 userInfo:(id)arg1 ;
-(void)failQuery:(id)arg0 error:(id)arg1 ;
-(void)performQueryWithKey:(id)arg0 expectsSynchronousResult:(BOOL)arg1 block:(id)arg2 ;
// -(void)performQueryWithKey:(id)arg0 expectsSynchronousResult:(BOOL)arg1 block:(id)arg2 completionHandler:(unk)arg3  ;


@end


#endif