// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIAUTONOMOUSSINGLEAPPMODESESSION_H
#define UIAUTONOMOUSSINGLEAPPMODESESSION_H


#import <Foundation/Foundation.h>

#import "UIAutonomousSingleAppModeConfiguration.h"

@interface UIAutonomousSingleAppModeSession : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (copy, nonatomic) UIAutonomousSingleAppModeConfiguration *effectiveConfiguration; // ivar: _effectiveConfiguration


+(id)__gaxTrampoline_currentlyActiveSession;
+(id)currentlyActiveSession;
+(void)__gaxTrampoline_requestSessionWithConfiguration:(id)arg0 completion:(id)arg1 ;
+(void)requestSessionWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(id)initWithEffectiveConfiguration:(id)arg0 ;
-(void)__gaxTrampoline_endSessionWithCompletion:(id)arg0 ;
-(void)_guidedAccessStateDidChange:(id)arg0 ;
-(void)dealloc;
-(void)endWithCompletion:(id)arg0 ;


@end


#endif