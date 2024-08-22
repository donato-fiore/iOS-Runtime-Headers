// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMEDIAPLAYERITEMSTATUS_H
#define SKUIMEDIAPLAYERITEMSTATUS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIMediaPlayerItemStatus : NSObject <NSCopying>



@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL hideDuration; // ivar: _hideDuration
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic) NSInteger itemType; // ivar: _itemType
@property (nonatomic) NSInteger playState; // ivar: _playState
@property (copy, nonatomic) NSString *storeAlbumID; // ivar: _storeAlbumID
@property (copy, nonatomic) NSString *storeID; // ivar: _storeID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif