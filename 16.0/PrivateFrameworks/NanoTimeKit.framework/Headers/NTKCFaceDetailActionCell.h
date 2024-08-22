// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCFACEDETAILACTIONCELL_H
#define NTKCFACEDETAILACTIONCELL_H



#import "NTKCDetailTableViewCell.h"
#import "NTKCSeparatorView.h"

@interface NTKCFaceDetailActionCell : NTKCDetailTableViewCell {
    NTKCSeparatorView *_topSeparator;
}




+(CGFloat)rowHeight;
-(id)initWithAction:(NSInteger)arg0 ;
-(void)layoutSubviews;


@end


#endif