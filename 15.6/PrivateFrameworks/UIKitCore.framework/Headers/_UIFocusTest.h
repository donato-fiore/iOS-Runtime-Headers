// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSTEST_H
#define _UIFOCUSTEST_H

@class NSString;
@protocol _UIFocusTestDelegate;

#import <Foundation/Foundation.h>


@interface _UIFocusTest : NSObject

@property (weak, nonatomic) NSObject<_UIFocusTestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=_isApplicationTest) BOOL isApplicationTest; // ivar: _isApplicationTest
@property (copy, nonatomic) id *runCompletionHandler; // ivar: _runCompletionHandler
@property (nonatomic) NSInteger state; // ivar: _state


+(id)currentTest;
+(void)_setCurrentTest:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_finish:(BOOL)arg0 ;
-(void)_start;
-(void)cancel;
-(void)main;
-(void)prepareWithCompletionHandler:(id)arg0 ;
-(void)reset;
-(void)runWithCompletionHandler:(id)arg0 ;
-(void)stop;


@end


#endif