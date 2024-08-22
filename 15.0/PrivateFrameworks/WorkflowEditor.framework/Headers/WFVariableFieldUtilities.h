// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLEFIELDUTILITIES_H
#define WFVARIABLEFIELDUTILITIES_H


#import <Foundation/Foundation.h>


@interface WFVariableFieldUtilities : NSObject



+(BOOL)clipboardContainsVariableString;
+(BOOL)pasteboardContainsVariableString:(id)arg0 ;
+(id)variableStringFromPasteboard:(id)arg0 withVariableProvider:(id)arg1 ;
+(void)copyVariableString:(id)arg0 toPasteboard:(id)arg1 ;


@end


#endif