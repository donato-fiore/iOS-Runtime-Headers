// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGINHUMANS_H
#define SGINHUMANS_H


#import <Foundation/Foundation.h>


@interface SGInhumans : NSObject



+(BOOL)_isInhumanEmailAddressPatternMatch:(id)arg0 ;
+(BOOL)areHumanHeaders:(id)arg0 ;
+(BOOL)hasTooManyLongNumbers:(id)arg0 ;
+(BOOL)isInhumanBody:(id)arg0 ;
+(BOOL)isInhumanEmailAddress:(id)arg0 ;
+(BOOL)isInhumanName:(id)arg0 ;
+(BOOL)isInhumanNamedEmailAddress:(id)arg0 ;
+(BOOL)isInhumanPerson:(id)arg0 ;
+(BOOL)isInhumanPhoneNumber:(id)arg0 ;


@end


#endif