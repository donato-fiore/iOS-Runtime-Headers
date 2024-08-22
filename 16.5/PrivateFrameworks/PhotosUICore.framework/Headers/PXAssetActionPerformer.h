// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXASSETACTIONPERFORMER_H
#define PXASSETACTIONPERFORMER_H



#import "PXActionPerformer.h"
#import "PXSectionedSelectionManager.h"
#import "PXSelectionSnapshot.h"

@interface PXAssetActionPerformer : PXActionPerformer

@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot


-(BOOL)shouldExitSelectModeForState:(NSUInteger)arg0 ;


@end


#endif