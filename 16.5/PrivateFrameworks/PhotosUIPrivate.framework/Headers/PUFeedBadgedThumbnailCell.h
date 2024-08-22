// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUFEEDBADGEDTHUMBNAILCELL_H
#define PUFEEDBADGEDTHUMBNAILCELL_H

@class PXBadgedThumbnailView;


#import "PUFeedCell.h"

@interface PUFeedBadgedThumbnailCell : PUFeedCell

@property (readonly, nonatomic) PXBadgedThumbnailView *badgedThumbnailView; // ivar: _badgedThumbnailView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;


@end


#endif