// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSTARTUPTRANSITIONCONTEXTPERSISTENCE_H
#define SBSTARTUPTRANSITIONCONTEXTPERSISTENCE_H

@class SBBootDefaults;

#import <Foundation/Foundation.h>


@interface SBStartupTransitionContextPersistence : NSObject {
    SBBootDefaults *_bootDefaults;
    BOOL _loginSession;
}




-(id)initWithBootDefaults:(id)arg0 loginSession:(BOOL)arg1 ;
-(id)readTransitionContext;
-(void)saveContext:(id)arg0 ;


@end


#endif