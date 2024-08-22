// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVOUTPUTCONTEXTMANAGER_H
#define AVOUTPUTCONTEXTMANAGER_H


#import <Foundation/Foundation.h>

#import "AVOutputContextManagerInternal.h"

@interface AVOutputContextManager : NSObject {
    AVOutputContextManagerInternal *_ivars;
}




+(id)outputContextManagerForAllOutputContexts;
-(id)initWithOutputContextManagerImpl:(id)arg0 ;
-(void)dealloc;
-(void)outputContextManagerImpl:(id)arg0 observedFailureToConnectToOutputDevice:(id)arg1 reason:(id)arg2 ;
-(void)outputContextManagerImplDidExpireWithReplacementImpl:(id)arg0 ;


@end


#endif