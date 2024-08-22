// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PENDINGREADINGLISTITEM_H
#define PENDINGREADINGLISTITEM_H

@class WebBookmark;
@protocol ReadingListMetadataProvider;

#import <Foundation/Foundation.h>


@interface PendingReadingListItem : NSObject

@property (readonly, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, nonatomic) NSObject<ReadingListMetadataProvider> *provider; // ivar: _provider


+(id)itemWithBookmark:(id)arg0 provider:(id)arg1 ;


@end


#endif