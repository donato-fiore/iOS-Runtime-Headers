// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIWIDGETBAR_H
#define PXUIWIDGETBAR_H



#import "PXWidgetBar.h"
#import "PXUIWidgetBarViewTile.h"

@interface PXUIWidgetBar : PXWidgetBar

@property (readonly, nonatomic) PXUIWidgetBarViewTile *_viewTile; // ivar: __viewTile


-(id)checkOutTileWithKind:(NSInteger)arg0 ;
-(id)createTileAnimator;
-(void)checkInTile:(id)arg0 ;
-(void)updateView;


@end


#endif