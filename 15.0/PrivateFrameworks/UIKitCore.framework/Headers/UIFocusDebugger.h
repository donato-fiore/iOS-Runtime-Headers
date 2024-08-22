// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIFOCUSDEBUGGER_H
#define UIFOCUSDEBUGGER_H


#import <Foundation/Foundation.h>


@interface UIFocusDebugger : NSObject



+(id)_ancestryForEnvironment:(id)arg0 ;
+(id)_legacy_checkFocusabilityForView:(id)arg0 ;
+(id)_statusForFocusSystem:(id)arg0 scene:(id)arg1 includeFocusSystemLog:(BOOL)arg2 includeSceneLog:(BOOL)arg3 ;
+(id)_verboseStatus;
+(id)checkFocusGroupTreeForEnvironment:(id)arg0 ;
+(id)checkFocusabilityForItem:(id)arg0 ;
+(id)help;
+(id)simulateFocusUpdateRequestFromEnvironment:(id)arg0 ;
+(id)status;


@end


#endif