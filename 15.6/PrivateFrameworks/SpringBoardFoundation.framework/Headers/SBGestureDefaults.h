// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBGESTUREDEFAULTS_H
#define SBGESTUREDEFAULTS_H

@class NSArray;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBGestureDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSArray *systemGestureLoggingOptions;
@property (readonly, nonatomic, getter=isSystemGesturesAllowed) BOOL systemGesturesAllowed;


-(void)_bindAndRegisterDefaults;


@end


#endif