// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IEFLOWTESTBUILDER_H
#define IEFLOWTESTBUILDER_H


#import <Foundation/Foundation.h>


@interface IEFlowTestBuilder : NSObject

@property (nonatomic) TestCaseBuilder mBuilder; // ivar: _mBuilder


-(BOOL)addToTestFile:(id)arg0 flowId:(id)arg1 testName:(id)arg2 description:(id)arg3 ;
-(BOOL)addToTestFile:(id)arg0 testName:(id)arg1 description:(id)arg2 ;
-(int)count;
-(void)assertResponseAllIds:(id)arg0 ;
-(void)assertResponseAnyId:(id)arg0 ;
-(void)clear;
-(void)gotoResponse:(id)arg0 ;
-(void)sendEvent:(id)arg0 ;
-(void)sendIntent:(id)arg0 ;
-(void)setVariable:(id)arg0 value:(id)arg1 ;
-(void)switchActivity:(id)arg0 ;


@end


#endif