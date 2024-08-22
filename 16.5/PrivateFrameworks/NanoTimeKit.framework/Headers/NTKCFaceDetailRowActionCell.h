// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCFACEDETAILROWACTIONCELL_H
#define NTKCFACEDETAILROWACTIONCELL_H



#import "NTKCDetailTableViewCell.h"
#import "NTKCSeparatorView.h"

@interface NTKCFaceDetailRowActionCell : NTKCDetailTableViewCell {
    NTKCSeparatorView *_topSeparator;
}


@property (nonatomic) BOOL showsTopSeparator; // ivar: _showsTopSeparator


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif