// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI32COLLECTIONVIEWLISTDISCLOSURECELL_H
#define _TTC18HEALTHEXPERIENCEUI32COLLECTIONVIEWLISTDISCLOSURECELL_H

@class UICollectionViewListCell, NSString;



@interface _TtC18HealthExperienceUI32CollectionViewListDisclosureCell : UICollectionViewListCell {
    ? item;
    ? $__lazy_storage_$_textLabel;
    ? $__lazy_storage_$_detailTextLabel;
    ? showDisclosureIndicator;
    ? currentLayoutConstraints;
    ? detailTextObservation;
}


@property (nonatomic, readonly) NSString *description;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif