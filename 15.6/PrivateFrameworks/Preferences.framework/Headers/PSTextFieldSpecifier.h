// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSTEXTFIELDSPECIFIER_H
#define PSTEXTFIELDSPECIFIER_H

@class NSString;


#import "PSSpecifier.h"

@interface PSTextFieldSpecifier : PSSpecifier {
    SEL bestGuess;
    NSString *_placeholder;
}




+(id)preferenceSpecifierNamed:(id)arg0 target:(id)arg1 set:(SEL)arg2 get:(SEL)arg3 detail:(Class)arg4 cell:(NSInteger)arg5 edit:(Class)arg6 ;
+(id)specifierWithSpecifier:(id)arg0 ;
-(BOOL)isEqualToSpecifier:(id)arg0 ;
-(id)placeholder;
-(void)setPlaceholder:(id)arg0 ;


@end


#endif