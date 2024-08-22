// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVSUPPORTEDCALENDARCOMPONENTSETS_H
#define CALDAVSUPPORTEDCALENDARCOMPONENTSETS_H

@class CoreDAVItem, NSMutableSet;



@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {
    NSMutableSet *_componentSets;
}




+(BOOL)allowedCalendars:(id)arg0 contains:(id)arg1 ;
-(id)childrenToWrite;
-(id)componentsAsString;
-(id)copyParseRules;
-(id)description;
-(id)init;
-(void)addCompSet:(id)arg0 ;


@end


#endif