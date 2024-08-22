// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UINAVIGATIONBARAPPEARANCE_H
#define UINAVIGATIONBARAPPEARANCE_H

@class NSString, NSDictionary;
@protocol _UIBarButtonItemAppearanceChangeObserver;


#import "UIBarAppearance.h"
#import "_UINavTitleAppearanceData.h"
#import "UIBarButtonItemAppearance.h"
#import "UIImage.h"

@interface UINavigationBarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver>

 {
    _UINavTitleAppearanceData *_barTitleData;
}


@property (copy, nonatomic) UIBarButtonItemAppearance *backButtonAppearance; // ivar: _backButtonAppearance
@property (readonly, nonatomic) UIImage *backIndicatorImage;
@property (readonly, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property (copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance; // ivar: _buttonAppearance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance; // ivar: _doneButtonAppearance
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes;
@property (readonly) Class superclass;
@property (nonatomic) UIOffset titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;


+(BOOL)supportsSecureCoding;
-(BOOL)_checkEqualTo:(id)arg0 ;
-(NSUInteger)_hashInto:(NSUInteger)arg0 ;
-(id)_barTitleData;
-(id)_plainButtonAppearance;
-(id)_plainButtonAppearanceData;
-(void)_barButtonItemAppearanceChangedItemData:(id)arg0 toItemData:(id)arg1 fromItemData:(id)arg2 ;
-(void)_barButtonItemDataChanged:(id)arg0 ;
-(void)_completeInit;
-(void)_copyFromAppearance:(id)arg0 ;
-(void)_decodeFromCoder:(id)arg0 ;
-(void)_describeInto:(id)arg0 ;
-(void)_setupDefaults;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif