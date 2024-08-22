// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BACHANGERECORD_H
#define BACHANGERECORD_H


#import <Foundation/Foundation.h>

#import "WebBookmark.h"
#import "WebBookmarkCollection.h"

@interface BAChangeRecord : NSObject

@property (readonly, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, nonatomic) int changeType; // ivar: _changeType
@property (readonly, nonatomic) WebBookmarkCollection *collection; // ivar: _collection


-(id)_changedAttributeDescription;
-(id)description;
-(id)initWithBookmarkCollection:(id)arg0 bookmark:(id)arg1 changeType:(int)arg2 ;


@end


#endif