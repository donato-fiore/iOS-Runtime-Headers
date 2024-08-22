// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARDATAAGGREGATORUPDATE_H
#define _UISTATUSBARDATAAGGREGATORUPDATE_H


#import <Foundation/Foundation.h>

#import "_UIStatusBarDataEntry.h"

@interface _UIStatusBarDataAggregatorUpdate : NSObject

@property (nonatomic) BOOL animated; // ivar: _animated
@property (retain, nonatomic) _UIStatusBarDataEntry *entry; // ivar: _entry


+(id)updateWithEntry:(id)arg0 ;


@end


#endif