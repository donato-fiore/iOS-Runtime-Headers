// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXBASICTILEANIMATIONOPTIONS_H
#define PXBASICTILEANIMATIONOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXBasicTileAnimationOptions : NSObject <NSCopying>



@property (nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) BOOL shouldNotifyTiles; // ivar: _shouldNotifyTiles
@property (nonatomic) BOOL shouldSnapshotDynamicContents; // ivar: _shouldSnapshotDynamicContents
@property (nonatomic) NSInteger style; // ivar: _style


+(id)defaultAnimationOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif