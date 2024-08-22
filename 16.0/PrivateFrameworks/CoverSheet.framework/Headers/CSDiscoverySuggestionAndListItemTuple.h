// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSDISCOVERYSUGGESTIONANDLISTITEMTUPLE_H
#define CSDISCOVERYSUGGESTIONANDLISTITEMTUPLE_H

@protocol ATXUserEducationSuggestion;

#import <Foundation/Foundation.h>

#import "CSListItem.h"

@interface CSDiscoverySuggestionAndListItemTuple : NSObject

@property (retain, nonatomic) NSObject<ATXUserEducationSuggestion> *discoverySuggestion; // ivar: _discoverySuggestion
@property (retain, nonatomic) CSListItem *listItem; // ivar: _listItem




@end


#endif