// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVSUPPORTEDREPORTSETITEM_H
#define COREDAVSUPPORTEDREPORTSETITEM_H

@class NSMutableSet;


#import "CoreDAVItem.h"

@interface CoreDAVSupportedReportSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *supportedReports; // ivar: _supportedReports


+(id)copyParseRules;
-(BOOL)supportsReportWithNameSpace:(id)arg0 andName:(id)arg1 ;
-(id)description;
-(id)init;
-(void)addSupportedReport:(id)arg0 ;


@end


#endif