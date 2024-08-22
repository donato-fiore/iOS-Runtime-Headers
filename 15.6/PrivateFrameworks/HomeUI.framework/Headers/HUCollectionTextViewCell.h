// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCOLLECTIONTEXTVIEWCELL_H
#define HUCOLLECTIONTEXTVIEWCELL_H

@class UICollectionViewListCell;


#import "HUTappableTextView.h"

@interface HUCollectionTextViewCell : UICollectionViewListCell

@property (retain, nonatomic) HUTappableTextView *messageTextView; // ivar: _messageTextView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)setContentConfiguration:(id)arg0 ;


@end


#endif