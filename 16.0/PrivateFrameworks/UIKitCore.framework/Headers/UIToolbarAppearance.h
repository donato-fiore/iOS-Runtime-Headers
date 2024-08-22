// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITOOLBARAPPEARANCE_H
#define UITOOLBARAPPEARANCE_H

@class NSString;
@protocol _UIBarButtonItemAppearanceChangeObserver;


#import "UIBarAppearance.h"
#import "UIBarButtonItemAppearance.h"

@interface UIToolbarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver>



@property (copy, nonatomic) UIBarButtonItemAppearance *buttonAppearance; // ivar: _buttonAppearance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) UIBarButtonItemAppearance *doneButtonAppearance; // ivar: _doneButtonAppearance
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_checkEqualTo:(id)arg0 ;
-(NSUInteger)_hashInto:(NSUInteger)arg0 ;
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