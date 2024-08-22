// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRUIFUTILITIES_H
#define SRUIFUTILITIES_H


#import <Foundation/Foundation.h>


@interface SRUIFUtilities : NSObject



+(BOOL)shouldRedactSpeakableTextForAceObject:(id)arg0 ;
+(BOOL)string:(id)arg0 equalToString:(id)arg1 ;
+(BOOL)string:(id)arg0 isSameAsUserUtterance:(id)arg1 ;
+(id)_normalizeTextString:(id)arg0 ;
+(id)descriptionForAceView:(id)arg0 ;
+(id)descriptionForAddDialogs:(id)arg0 ;
+(id)descriptionForAddViews:(id)arg0 ;
+(id)descriptionForDialog:(id)arg0 ;
+(id)descriptionForSayIt:(id)arg0 ;
+(id)parsedUtteranceFromText:(id)arg0 context:(id)arg1 spekableObjectProviding:(id)arg2 ;


@end


#endif