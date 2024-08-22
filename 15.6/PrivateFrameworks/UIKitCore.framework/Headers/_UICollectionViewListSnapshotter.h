// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWLISTSNAPSHOTTER_H
#define _UICOLLECTIONVIEWLISTSNAPSHOTTER_H

@class UIDataSourceSnapshotter, NSIndexSet;



@interface _UICollectionViewListSnapshotter : UIDataSourceSnapshotter {
    NSIndexSet *_topSeparators;
    NSIndexSet *_bottomSeparators;
}


@property (readonly, nonatomic) BOOL displaysAdditionalSeparators; // ivar: _displaysAdditionalSeparators


// +(id)snapshotterForSectionCountsProvider:(id)arg0 topBottomSeparatorProvider:(unk)arg1 displaysAdditionalSeparators:(id)arg2  ;
-(BOOL)hasBottomSeparatorInSection:(NSInteger)arg0 ;
-(BOOL)hasTopSeparatorInSection:(NSInteger)arg0 ;
// -(id)initWithSectionCountsProvider:(id)arg0 topBottomSeparatorProvider:(unk)arg1 displaysAdditionalSeparators:(id)arg2  ;


@end


#endif