// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSOBJECT_QSSUPPORT_H
#define NSOBJECT_QSSUPPORT_H

@class super;



@interface NSObject_QSSupport : super



+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
-(BOOL)_accessibilityIsTextInput;
-(id)_accessibilityQuickSpeakContent;
-(id)_accessibilityQuickSpeakEnclosingSentence:(*id)arg0 ;
-(id)_accessibilityQuickSpeakTokenizer;
-(id)_accessibilitySentenceRectsForRange:(id)arg0 ;
-(id)_accessibilityTextRectsForRange:(id)arg0 singleTextRect:(struct CGRect *)arg1 ;


@end


#endif