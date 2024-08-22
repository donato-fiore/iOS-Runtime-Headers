// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTSEARCHINDEXFORMATTER_H
#define CNCONTACTSEARCHINDEXFORMATTER_H

@class NSFormatter;



@interface CNContactSearchIndexFormatter : NSFormatter



-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)auxiliaryIndexStringForContact:(id)arg0 ;
-(id)nameExpansionsForContact:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromContact:(id)arg0 ;


@end


#endif