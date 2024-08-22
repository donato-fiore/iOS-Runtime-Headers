// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHISTORYSESSIONWITHITEMS_H
#define WBSHISTORYSESSIONWITHITEMS_H

@class NSArray;


#import "WBSHistorySession.h"

@interface WBSHistorySessionWithItems : WBSHistorySession

@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items


-(id)init;
-(id)initWithSessionStartDate:(id)arg0 ;
-(id)initWithSessionStartDate:(id)arg0 items:(id)arg1 ;


@end


#endif