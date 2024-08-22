// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXFULLSCREENCAPTIONDARKMODEPOLICYEXCEPTION_H
#define SXFULLSCREENCAPTIONDARKMODEPOLICYEXCEPTION_H

@class NSString;
@protocol SXDarkModePolicyException;

#import <Foundation/Foundation.h>


@interface SXFullscreenCaptionDarkModePolicyException : NSObject <SXDarkModePolicyException>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)shouldApplyAutoDarkModeForComponentClassification:(id)arg0 ;
-(NSInteger)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg0 DOM:(id)arg1 ;
-(NSInteger)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg0 DOM:(id)arg1 ;


@end


#endif