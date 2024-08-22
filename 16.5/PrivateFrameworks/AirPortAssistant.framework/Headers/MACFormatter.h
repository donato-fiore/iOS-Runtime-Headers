// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MACFORMATTER_H
#define MACFORMATTER_H

@class NSCharacterSet, NSString;


#import "APFormatter.h"

@interface MACFormatter : APFormatter {
    NSCharacterSet *_possibleSeparators;
    NSCharacterSet *_possibleSeparatorsInvertedSet;
    NSString *_userPreferredSeparator;
}




+(BOOL)parseMACAddress:(char *)arg0 intoHexString:(char *)arg1 ;
+(id)macAddressSet;
+(id)macFormatter;
+(id)sharedMACFormatter;
-(BOOL)isPartialStringValid:(*id)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(id)arg2 originalSelectedRange:(struct _NSRange )arg3 errorDescription:(*id)arg4 ;
-(id)init;
-(id)possibleSeparators;
-(id)possibleSeparatorsInvertedSet;
-(id)userPreferredSeparator;
-(void)dealloc;
-(void)removeMACAddressSeparatorsFromString:(id)arg0 ;
-(void)setPossibleSeparators:(id)arg0 ;
-(void)setPossibleSeparatorsInvertedSet:(id)arg0 ;
-(void)setUserPreferredSeparator:(id)arg0 ;


@end


#endif