// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSCASEPRESERVINGSTRING_H
#define VSCASEPRESERVINGSTRING_H

@class NSString;



@interface VSCasePreservingString : NSString {
    NSString *_underlyingString;
}




-(NSUInteger)length;
-(id)capitalizedString;
-(id)capitalizedStringWithLocale:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)localizedCapitalizedString;
-(id)localizedLowercaseString;
-(id)localizedUppercaseString;
-(id)lowercaseString;
-(id)lowercaseStringWithLocale:(id)arg0 ;
-(id)uppercaseString;
-(id)uppercaseStringWithLocale:(id)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif