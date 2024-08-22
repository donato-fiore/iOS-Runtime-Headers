// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACTIONBRIDGE_H
#define _UIACTIONBRIDGE_H


#import <Foundation/Foundation.h>


@interface _UIActionBridge : NSObject



+(id)_SPIUIActionsFromElementBasedUIActions:(id)arg0 ;
+(id)_elementBasedUIActionsFromSPIUIActions:(id)arg0 ;
+(id)actionMenuForMenu:(id)arg0 firstTarget:(id)arg1 includeHidden:(BOOL)arg2 ;
+(id)actionMenuForMenu:(id)arg0 firstTarget:(id)arg1 includeHidden:(BOOL)arg2 validation:(id)arg3 ;
+(id)validatedCommandMenuForMenu:(id)arg0 firstTarget:(id)arg1 ;
+(id)validatedCommandMenuForMenu:(id)arg0 firstTarget:(id)arg1 validation:(id)arg2 ;


@end


#endif