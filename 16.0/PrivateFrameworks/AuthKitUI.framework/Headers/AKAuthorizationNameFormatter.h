// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONNAMEFORMATTER_H
#define AKAUTHORIZATIONNAMEFORMATTER_H

@class NSFormatter;



@interface AKAuthorizationNameFormatter : NSFormatter



+(id)validNameCharacterSet;
+(void)_addSymbolModifiersToCharacterSet:(id)arg0 ;
-(BOOL)_isOnlyWhitespace:(id)arg0 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)isPartialStringValid:(*id)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(id)arg2 originalSelectedRange:(struct _NSRange )arg3 errorDescription:(*id)arg4 ;
-(id)_cleanNameString:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif