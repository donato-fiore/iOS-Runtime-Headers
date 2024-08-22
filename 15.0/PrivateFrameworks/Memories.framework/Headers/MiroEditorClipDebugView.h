// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROEDITORCLIPDEBUGVIEW_H
#define MIROEDITORCLIPDEBUGVIEW_H

@class UIView, UICollectionView, NSString, UILabel;
@protocol UICollectionViewDataSource;


#import "MiroColorSelectionController.h"

@interface MiroEditorClipDebugView : UIView <UICollectionViewDataSource>



@property (retain, nonatomic) MiroColorSelectionController *colorSelectionController; // ivar: _colorSelectionController
@property (weak, nonatomic) UICollectionView *colorSwatchCollectionView; // ivar: _colorSwatchCollectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UILabel *label1; // ivar: _label1
@property (weak, nonatomic) UILabel *label2; // ivar: _label2
@property (weak, nonatomic) UILabel *label3; // ivar: _label3
@property (readonly) Class superclass;


+(void)initialize;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_labelTextIfSafeAccentColor:(id)arg0 ;
-(id)_labelTextIfSafeDominantColor:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(void)_configureCell:(id)arg0 withColor:(id)arg1 overrideBorderColor:(id)arg2 emphasize:(BOOL)arg3 label:(id)arg4 ;
-(void)setupWithClipProvider:(id)arg0 ;


@end


#endif