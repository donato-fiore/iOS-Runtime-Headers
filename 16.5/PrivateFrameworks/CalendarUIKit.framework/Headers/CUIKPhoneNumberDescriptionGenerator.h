// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKPHONENUMBERDESCRIPTIONGENERATOR_H
#define CUIKPHONENUMBERDESCRIPTIONGENERATOR_H



#import "CUIKDescriptionGenerator.h"

@interface CUIKPhoneNumberDescriptionGenerator : CUIKDescriptionGenerator



+(id)normalizedPhoneNumber:(id)arg0 ;
+(id)sharedGenerator;
-(id)formattedStringForPhoneNumber:(id)arg0 ;
-(id)formattedStringForTelURL:(id)arg0 ;


@end


#endif