// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFXOVERLAYEFFECTPICKERVIEW_H
#define CFXOVERLAYEFFECTPICKERVIEW_H

@class UIView, NSString;
@protocol JTCollectionViewDelegate;


#import "CFXEffectPickerView.h"
#import "JTCollectionView.h"
#import "JTCollectionViewFlowLayout.h"

@interface CFXOverlayEffectPickerView : CFXEffectPickerView <JTCollectionViewDelegate>



@property (weak, nonatomic) JTCollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) JTCollectionViewFlowLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (weak, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)effectPickerCellNibName;
-(id)effectPickerCellReuseIdentifier;
-(id)effectPickerNibName;
-(void)didResizeCollectionViewToSize:(struct CGSize )arg0 ;
-(void)subviewsDidLoad;
-(void)updateThumbnailColumnSizeForCollectionSize;


@end


#endif