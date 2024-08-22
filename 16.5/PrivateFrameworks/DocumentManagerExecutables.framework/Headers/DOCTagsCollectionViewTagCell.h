// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTAGSCOLLECTIONVIEWTAGCELL_H
#define DOCTAGSCOLLECTIONVIEWTAGCELL_H

@class UICollectionViewCell;


#import "DOCTagsCollectionItemContentView.h"

@interface DOCTagsCollectionViewTagCell : UICollectionViewCell

@property (readonly, nonatomic) DOCTagsCollectionItemContentView *tagView; // ivar: _tagView


-(CGFloat)maxTagWidth;
-(id)doc_tagsCollectionCellMenuTarget;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;


@end


#endif