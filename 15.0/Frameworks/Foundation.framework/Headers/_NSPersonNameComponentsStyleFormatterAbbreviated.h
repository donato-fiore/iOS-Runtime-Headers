// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSPERSONNAMECOMPONENTSSTYLEFORMATTERABBREVIATED_H
#define _NSPERSONNAMECOMPONENTSSTYLEFORMATTERABBREVIATED_H

@class NSPersonNameComponentsStyleFormatter;



@interface _NSPersonNameComponentsStyleFormatterAbbreviated : NSPersonNameComponentsStyleFormatter



-(BOOL)shouldIgnoreComponentsContainingSpecialCharacters;
-(id)_delimiterBetweenString:(id)arg0 andString:(id)arg1 isPhonetic:(BOOL)arg2 ;
-(id)_formattedStringFromOrderedKeys:(id)arg0 components:(id)arg1 attributesByRange:(id)arg2 ;
-(id)abbreviatedKeys;
-(id)fallbackStyleFormatter;
-(id)keysOfInterest;


@end


#endif