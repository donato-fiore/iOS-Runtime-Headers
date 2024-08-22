// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKTIMEINTERVALTEXTPROVIDER_H
#define CUIKTIMEINTERVALTEXTPROVIDER_H


#import <Foundation/Foundation.h>


@interface CUIKTimeIntervalTextProvider : NSObject



+(id)_stringByRemovingDesignatorRange:(struct _NSRange )arg0 fromString:(id)arg1 ;
+(id)timeIntervalAttributedTextWithStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 font:(struct __CTFont *)arg3 ;
+(id)timeIntervalAttributedTextWithStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 font:(struct __CTFont *)arg3 designatorRequiresWhitespace:(BOOL)arg4 smallCapsAllowed:(BOOL)arg5 dropLeftRedundantDesignator:(BOOL)arg6 ;
+(struct _NSRange )_rangeOfAnnontatedTime:(id)arg0 matchingPattern:(id)arg1 ;
+(struct _NSRange )_rangeOfDesignatorInAnnotatedTime:(id)arg0 ;


@end


#endif