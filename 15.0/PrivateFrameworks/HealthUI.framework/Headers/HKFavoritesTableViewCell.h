// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFAVORITESTABLEVIEWCELL_H
#define HKFAVORITESTABLEVIEWCELL_H

@class UITableViewCell, UIImageView;



@interface HKFavoritesTableViewCell : UITableViewCell {
    UIImageView *_star;
    UIImageView *_filledStar;
}


@property (nonatomic, getter=isFavorited) BOOL favorited;


+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif