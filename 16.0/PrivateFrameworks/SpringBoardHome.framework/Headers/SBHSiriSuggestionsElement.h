// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHSIRISUGGESTIONSELEMENT_H
#define SBHSIRISUGGESTIONSELEMENT_H



#import "SBHCustomIconElement.h"

@interface SBHSiriSuggestionsElement : SBHCustomIconElement



+(id)elementIdentifier;
+(id)elementKind;
-(NSUInteger)supportedGridSizeClassesForIcon:(id)arg0 ;
-(id)displayName;
-(id)icon:(id)arg0 imageWithInfo:(struct SBIconImageInfo )arg1 ;


@end


#endif