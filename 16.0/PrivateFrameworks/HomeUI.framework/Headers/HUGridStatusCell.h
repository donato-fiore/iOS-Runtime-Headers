// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDSTATUSCELL_H
#define HUGRIDSTATUSCELL_H

@class UICollectionViewCell, HFItem;
@protocol HUGridCellProtocol;


#import "HUGridCellLayoutOptions.h"

@interface HUGridStatusCell : UICollectionViewCell <HUGridCellProtocol>



@property (nonatomic) BOOL cellContentsHidden; // ivar: areCellContentsHidden
@property (nonatomic, retain) HFItem *item; // ivar: item
@property (nonatomic, retain) HUGridCellLayoutOptions *layoutOptions; // ivar: layoutOptions


-(BOOL)areCellContentsHidden;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_bridgedUpdateConfigurationUsingState:(id)arg0 ;
-(void)prepareForReuse;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif