// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIBASEMEDIAITEM_H
#define VUIBASEMEDIAITEM_H

@class TVPBaseMediaItem;


#import "VUIMediaStartTimeCollection.h"

@interface VUIBaseMediaItem : TVPBaseMediaItem

@property (retain, nonatomic) VUIMediaStartTimeCollection *startTimeCollection; // ivar: _startTimeCollection


+(void)initialize;
-(id)mediaItemMetadataForProperty:(id)arg0 ;


@end


#endif