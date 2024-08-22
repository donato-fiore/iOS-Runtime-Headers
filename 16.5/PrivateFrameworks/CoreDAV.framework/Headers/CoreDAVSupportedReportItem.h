// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVSUPPORTEDREPORTITEM_H
#define COREDAVSUPPORTEDREPORTITEM_H



#import "CoreDAVItem.h"

@interface CoreDAVSupportedReportItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *report; // ivar: _report


+(id)copyParseRules;
-(id)description;
-(id)init;


@end


#endif