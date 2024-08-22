// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMUSICPLAYERMEDIAITEMQUEUEDESCRIPTOR_H
#define MPMUSICPLAYERMEDIAITEMQUEUEDESCRIPTOR_H



#import "MPMusicPlayerQueueDescriptor.h"
#import "MPMediaQuery.h"
#import "MPMediaItemCollection.h"
#import "MPMediaItem.h"

@interface MPMusicPlayerMediaItemQueueDescriptor : MPMusicPlayerQueueDescriptor {
    MPMediaQuery *_query;
    MPMediaItemCollection *_itemCollection;
}


@property (readonly, nonatomic) MPMediaItemCollection *itemCollection;
@property (readonly, copy, nonatomic) MPMediaQuery *query;
@property (retain, nonatomic) MPMediaItem *startItem; // ivar: _startItem


+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemCollection:(id)arg0 ;
-(id)initWithQuery:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setEndTime:(CGFloat)arg0 forItem:(id)arg1 ;
-(void)setStartTime:(CGFloat)arg0 forItem:(id)arg1 ;


@end


#endif