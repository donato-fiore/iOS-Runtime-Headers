// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVMATCHRESULTSITEM_H
#define COREDAVMATCHRESULTSITEM_H



#import "CoreDAVItem.h"
#import "CoreDAVLeafItem.h"

@interface CoreDAVMatchResultsItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *calendarDescription; // ivar: _calendarDescription
@property (retain, nonatomic) CoreDAVLeafItem *language; // ivar: _language
@property (retain, nonatomic) CoreDAVLeafItem *rank; // ivar: _rank
@property (retain, nonatomic) CoreDAVLeafItem *region; // ivar: _region


+(id)copyParseRules;
-(id)description;


@end


#endif