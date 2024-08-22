// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFTIMEZONECOLLECTIONVIEWCELL_H
#define MFTIMEZONECOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, NSString, UICellAccessoryLabel;



@interface MFTimezoneCollectionViewCell : UICollectionViewListCell

@property (retain, nonatomic) NSString *currentCityName; // ivar: _currentCityName
@property (retain, nonatomic) UICellAccessoryLabel *timeZoneLabel; // ivar: _timeZoneLabel


+(id)reusableIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureWithCityName:(id)arg0 ;


@end


#endif