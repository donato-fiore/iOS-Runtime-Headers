// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDITEMSWITHIDLOOKUPRESULT_H
#define FCFEEDITEMSWITHIDLOOKUPRESULT_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface FCFeedItemsWithIDLookupResult : NSObject

@property (retain, nonatomic) NSArray *feedItems; // ivar: _feedItems
@property (retain, nonatomic) NSDictionary *sectionIDsByFeedID; // ivar: _sectionIDsByFeedID


-(id)init;
-(id)initWithSectionIDByFeedID:(id)arg0 feedItems:(id)arg1 ;


@end


#endif