// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFAVORITESWITCHTABLEVIEWCELL_H
#define HKFAVORITESWITCHTABLEVIEWCELL_H

@class HKSwitchTableViewCell, NSString, HKDisplayType;
@protocol HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver;


#import "WDFavoriteDisplayTypesController.h"

@interface HKFavoriteSwitchTableViewCell : HKSwitchTableViewCell <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (retain, nonatomic) WDFavoriteDisplayTypesController *favoriteDisplayTypesController; // ivar: _favoriteDisplayTypesController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg0 ;
-(void)switchCellValueChanged:(id)arg0 value:(BOOL)arg1 ;
-(void)updateSwitchValue;


@end


#endif