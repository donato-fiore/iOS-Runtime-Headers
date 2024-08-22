// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ECBIMIHEADERPARSER_H
#define _ECBIMIHEADERPARSER_H


#import <Foundation/Foundation.h>


@interface _ECBIMIHeaderParser : NSObject



+(BOOL)_indicatorDataHasValidSVGProfile:(id)arg0 ;
+(BOOL)_versionIsValidWithScanner:(id)arg0 ;
+(id)_hashFromIndicatorHashHeader:(id)arg0 algorithm:(*id)arg1 ;
+(id)_locationFromLocationHeader:(id)arg0 evidenceLocation:(*id)arg1 ;
+(id)_locationFromScanner:(id)arg0 evidenceLocation:(*id)arg1 ;
+(id)_scanToNextTagForScanner:(id)arg0 allowSemicolonSeparator:(BOOL)arg1 value:(*id)arg2 ;
+(id)_scanToNextTagForScanner:(id)arg0 url:(*id)arg1 ;


@end


#endif