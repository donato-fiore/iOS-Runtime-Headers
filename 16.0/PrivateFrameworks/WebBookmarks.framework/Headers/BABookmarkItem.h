// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BABOOKMARKITEM_H
#define BABOOKMARKITEM_H


#import <Foundation/Foundation.h>

#import "WebBookmark.h"
#import "WebBookmarkCollection.h"

@interface BABookmarkItem : NSObject

@property (retain, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, nonatomic) WebBookmarkCollection *collection; // ivar: _collection


-(id)description;
-(id)initWithBookmarkCollection:(id)arg0 bookmark:(id)arg1 ;


@end


#endif