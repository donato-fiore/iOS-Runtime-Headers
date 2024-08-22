// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSENDMAILINTENTFORMATTER_H
#define MSSENDMAILINTENTFORMATTER_H

@class NSFormatter;



@interface MSSendMailIntentFormatter : NSFormatter



-(BOOL)allowsReverseTransformation;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)_stringForAddresses:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif