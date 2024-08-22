// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSCENETILECELL_H
#define HUSCENETILECELL_H



#import "HUTileCell.h"

@interface HUSceneTileCell : HUTileCell {
    ? _executeActionSetFuture;
}


@property (nonatomic, retain) id *executeActionSetFuture; // ivar: executeActionSetFuture
@property (nonatomic) BOOL rearranging;
@property (nonatomic) BOOL reorderable;


-(BOOL)isRearranging;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tappableAreaForPoint:(struct CGPoint )arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif