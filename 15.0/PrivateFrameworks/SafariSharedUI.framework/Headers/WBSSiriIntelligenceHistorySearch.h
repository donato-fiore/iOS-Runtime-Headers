// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSIRIINTELLIGENCEHISTORYSEARCH_H
#define WBSSIRIINTELLIGENCEHISTORYSEARCH_H

@class CSSearchQuery;

#import <Foundation/Foundation.h>


@interface WBSSiriIntelligenceHistorySearch : NSObject {
    CSSearchQuery *_searchQuery;
}




-(void)dealloc;
-(void)findURLStringsForHistoryItemsContainingString:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif