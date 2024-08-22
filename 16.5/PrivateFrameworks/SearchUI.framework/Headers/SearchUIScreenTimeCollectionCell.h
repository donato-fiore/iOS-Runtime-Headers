// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUISCREENTIMECOLLECTIONCELL_H
#define SEARCHUISCREENTIMECOLLECTIONCELL_H



#import "SearchUICollectionViewCell.h"
#import "SearchUIScreenTimeView.h"

@interface SearchUIScreenTimeCollectionCell : SearchUICollectionViewCell

@property (retain) SearchUIScreenTimeView *screenTimeView; // ivar: _screenTimeView


-(id)sizingView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif