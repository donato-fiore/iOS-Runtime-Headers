// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTHREADCONTEXT_H
#define MKTHREADCONTEXT_H


#import <Foundation/Foundation.h>


@interface MKThreadContext : NSObject {
    NSInteger _CA_disableActionsCounter;
}




+(id)currentContext;
-(void)_CA_setDisableActions:(BOOL)arg0 ;


@end


#endif