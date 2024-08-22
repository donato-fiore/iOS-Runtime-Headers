// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREDAVSYNCREPORTITEM_H
#define COREDAVSYNCREPORTITEM_H

@class NSString;


#import "CoreDAVMultiStatusItem.h"

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem

@property (readonly, nonatomic) NSString *syncToken; // ivar: _syncToken


+(id)copyParseRules;
-(id)description;


@end


#endif