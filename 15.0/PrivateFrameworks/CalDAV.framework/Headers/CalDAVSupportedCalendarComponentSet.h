// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVSUPPORTEDCALENDARCOMPONENTSET_H
#define CALDAVSUPPORTEDCALENDARCOMPONENTSET_H

@class CoreDAVItem, NSSet, NSMutableSet;



@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem

@property (readonly, nonatomic) NSSet *compNames;
@property (retain, nonatomic) NSMutableSet *comps; // ivar: _comps


-(id)childrenToWrite;
-(id)componentsAsString;
-(id)copyParseRules;
-(id)description;
-(id)init;
-(void)addComp:(id)arg0 ;


@end


#endif