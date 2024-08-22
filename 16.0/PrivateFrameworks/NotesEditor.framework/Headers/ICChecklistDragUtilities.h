// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCHECKLISTDRAGUTILITIES_H
#define ICCHECKLISTDRAGUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICChecklistDragUtilities : NSObject



+(BOOL)shouldDropAboveForTrackedTodoParagraph:(id)arg0 forPoint:(struct CGPoint )arg1 textView:(id)arg2 ;
+(NSUInteger)tabIndentationEqualivantForString:(id)arg0 ;
+(struct CGRect )insertionRectForTrackedTodoParagraph:(id)arg0 drawAbove:(BOOL)arg1 inTextView:(id)arg2 ;


@end


#endif