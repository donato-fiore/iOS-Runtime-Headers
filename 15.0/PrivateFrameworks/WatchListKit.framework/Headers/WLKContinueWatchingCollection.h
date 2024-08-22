// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKCONTINUEWATCHINGCOLLECTION_H
#define WLKCONTINUEWATCHINGCOLLECTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface WLKContinueWatchingCollection : NSObject

@property (readonly, copy, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif