// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef C2REQUESTMANAGER_H
#define C2REQUESTMANAGER_H


#import <Foundation/Foundation.h>

#import "C2SessionPool.h"

@interface C2RequestManager : NSObject

@property (readonly, nonatomic) C2SessionPool *sessionPool; // ivar: _sessionPool


+(id)sharedManager;
+(void)initialize;
-(id)createDataTaskWithRequest:(id)arg0 options:(id)arg1 delegate:(id)arg2 ;
-(id)createDataTaskWithRequest:(id)arg0 options:(id)arg1 delegate:(id)arg2 sessionHandle:(*id)arg3 ;
-(id)init;
-(id)testUtility_sessionForTask:(id)arg0 ;
-(id)testUtility_sessionTaskForTask:(id)arg0 ;
-(void)_testUtility_forTask:(id)arg0 sessionHandle:(*id)arg1 taskHandle:(*id)arg2 ;


@end


#endif