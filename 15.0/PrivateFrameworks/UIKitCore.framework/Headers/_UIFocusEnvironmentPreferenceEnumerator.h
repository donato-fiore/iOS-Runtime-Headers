// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSENVIRONMENTPREFERENCEENUMERATOR_H
#define _UIFOCUSENVIRONMENTPREFERENCEENUMERATOR_H

@class NSString;
@protocol _UIFocusEnvironmentPreferenceEnumerationContextDelegate;

#import <Foundation/Foundation.h>

#import "_UIDebugLogReport.h"

@interface _UIFocusEnvironmentPreferenceEnumerator : NSObject <_UIFocusEnvironmentPreferenceEnumerationContextDelegate>



@property (nonatomic) BOOL allowsInferringPreferences; // ivar: _allowsInferringPreferences
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UIDebugLogReport *debugReport; // ivar: _debugReport
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didVisitAllPreferencesForEnvironmentHandler; // ivar: _didVisitAllPreferencesForEnvironmentHandler
@property (readonly, nonatomic) NSInteger enumerationMode; // ivar: _enumerationMode
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *shouldInferPreferenceForEnvironmentHandler; // ivar: _shouldInferPreferenceForEnvironmentHandler
@property (readonly) Class superclass;


-(BOOL)_shouldInferDefaultPreferenceForEnvironmentInContext:(id)arg0 ;
-(id)init;
-(id)initWithEnumerationMode:(NSInteger)arg0 ;
-(void)enumeratePreferencesForEnvironment:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif