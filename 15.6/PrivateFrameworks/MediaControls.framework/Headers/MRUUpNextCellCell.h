// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUUPNEXTCELLCELL_H
#define MRUUPNEXTCELLCELL_H

@class UITableViewCell, MPArtworkCatalog, UIImageView, NSString;



@interface MRUUpNextCellCell : UITableViewCell

@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog; // ivar: _artworkCatalog
@property (retain, nonatomic) UIImageView *artworkView; // ivar: _artworkView
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif