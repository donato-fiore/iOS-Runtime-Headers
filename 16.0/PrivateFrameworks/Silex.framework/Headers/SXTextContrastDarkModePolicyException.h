// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXTEXTCONTRASTDARKMODEPOLICYEXCEPTION_H
#define SXTEXTCONTRASTDARKMODEPOLICYEXCEPTION_H

@class NSString;
@protocol SXDarkModePolicyException;

#import <Foundation/Foundation.h>

#import "SXJSONObjectMerger.h"

@interface SXTextContrastDarkModePolicyException : NSObject <SXDarkModePolicyException>



@property (readonly, nonatomic) SXJSONObjectMerger *componentStyleMerger; // ivar: _componentStyleMerger
@property (readonly, nonatomic) SXJSONObjectMerger *componentTextStyleMerger; // ivar: _componentTextStyleMerger
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg0 DOM:(id)arg1 ;
-(NSInteger)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg0 DOM:(id)arg1 ;
-(id)componentStyleForComponent:(id)arg0 DOM:(id)arg1 ;
-(id)componentTextStyleForButtonComponent:(id)arg0 DOM:(id)arg1 ;
-(id)componentTextStyleForTextComponent:(id)arg0 DOM:(id)arg1 ;
-(id)initWithComponentStyleMerger:(id)arg0 componentTextStyleMerger:(id)arg1 ;
-(id)mergedComponentTextStyleWithIdentifiers:(id)arg0 DOM:(id)arg1 ;
-(id)opaqueComponentStyleForComponent:(id)arg0 DOM:(id)arg1 ;


@end


#endif