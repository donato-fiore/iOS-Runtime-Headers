// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMSHAREPROMPTSTRINGGENERATOR_H
#define PXCMMSHAREPROMPTSTRINGGENERATOR_H


#import <Foundation/Foundation.h>


@interface PXCMMSharePromptStringGenerator : NSObject



+(id)_attributedStringWithString:(id)arg0 attributes:(id)arg1 boldFont:(id)arg2 boldRange1:(struct _NSRange )arg3 boldRange2:(struct _NSRange )arg4 ;
+(id)_stringWithComponentsCount:(NSUInteger)arg0 components:(id)arg1 containsOtherPeople:(BOOL)arg2 outBoldRange1:(struct _NSRange *)arg3 outBoldRange2:(struct _NSRange *)arg4 ;
+(id)sharePromptStringWithAttributes:(id)arg0 boldFont:(id)arg1 lines:(NSInteger)arg2 width:(CGFloat)arg3 names:(id)arg4 containsUnverifiedPersons:(BOOL)arg5 ;


@end


#endif