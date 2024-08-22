// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCPLAYERRESPONSETRACKLIST_H
#define MPCPLAYERRESPONSETRACKLIST_H

@class NSString, MPSectionedCollection, NSIndexPath;
@protocol NSObject;

#import <Foundation/Foundation.h>

#import "MPCPlayerResponseItem.h"
#import "MPCPlayerResponse.h"

@interface MPCPlayerResponseTracklist : NSObject <NSObject>

 {
    NSUInteger _changeItemSupport;
}


@property (readonly, nonatomic) NSInteger actionAtQueueEnd; // ivar: _actionAtQueueEnd
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) MPSectionedCollection *displayItems; // ivar: _displayItems
@property (readonly, nonatomic) NSInteger explicitContentState; // ivar: _explicitContentState
@property (readonly, nonatomic) NSInteger globalItemCount; // ivar: _globalItemCount
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) MPSectionedCollection *items; // ivar: _items
@property (readonly, nonatomic) NSInteger lastChangeDirection; // ivar: _lastChangeDirection
@property (readonly, nonatomic) MPCPlayerResponseItem *playingItem;
@property (readonly, nonatomic) NSInteger playingItemGlobalIndex; // ivar: _playingItemGlobalIndex
@property (readonly, copy, nonatomic) NSIndexPath *playingItemIndexPath; // ivar: _playingItemIndexPath
@property (readonly, nonatomic) NSInteger repeatType; // ivar: _repeatType
@property (readonly, weak, nonatomic) MPCPlayerResponse *response; // ivar: _response
@property (readonly, nonatomic) NSInteger shuffleType; // ivar: _shuffleType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSInteger upNextItemCount; // ivar: _upNextItemCount


+(id)insertCommandForPlayerPath:(id)arg0 devices:(id)arg1 ;
+(id)resetCommandForPlayerPath:(id)arg0 devices:(id)arg1 ;
-(NSUInteger)_determineChangeItemSupport;
-(id)_stateDumpObject;
-(id)changeItemCommand;
-(id)displayIndexPathForStructuredIndexPath:(id)arg0 ;
-(id)initWithResponse:(id)arg0 ;
-(id)insertCommand;
-(id)reorderCommand;
-(id)repeatCommand;
-(id)resetCommand;
-(id)shuffleCommand;
-(id)structuredIndexPathForDisplayIndexPath:(id)arg0 ;


@end


#endif