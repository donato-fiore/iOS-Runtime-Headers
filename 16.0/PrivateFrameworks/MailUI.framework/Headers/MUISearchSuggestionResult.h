// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUISEARCHSUGGESTIONRESULT_H
#define MUISEARCHSUGGESTIONRESULT_H

@class EMMessageObjectID, CSSearchableItem;

#import <Foundation/Foundation.h>


@interface MUISearchSuggestionResult : NSObject

@property (copy, nonatomic) EMMessageObjectID *objectID; // ivar: _objectID
@property (copy, nonatomic) CSSearchableItem *searchableItem; // ivar: _searchableItem


-(id)description;
-(id)initWithSearchableItem:(id)arg0 objectID:(id)arg1 ;


@end


#endif