// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXRECIPIENTTRANSPORTUTILITIES_H
#define PXRECIPIENTTRANSPORTUTILITIES_H


#import <Foundation/Foundation.h>


@interface PXRecipientTransportUtilities : NSObject



+(BOOL)px_IsEmailAddress:(id)arg0 equalToEmailAddress:(id)arg1 ;
+(BOOL)px_IsValidEmailAddress:(id)arg0 ;
+(NSInteger)px_recipientKindFromString:(id)arg0 ;
+(id)px_bestMessagingTransportForContact:(id)arg0 ;
+(id)px_validPhoneNumberFromString:(id)arg0 ;


@end


#endif