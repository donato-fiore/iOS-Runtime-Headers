// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISHORTCUTACTIVITY_H
#define UISHORTCUTACTIVITY_H

@class UIImage, NSString, NSArray, NSNumber;


#import "UIApplicationExtensionActivity.h"

@interface UIShortcutActivity : UIApplicationExtensionActivity

@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *photosAssetIdentifiers; // ivar: _photosAssetIdentifiers
@property (retain, nonatomic) NSString *singleUseToken; // ivar: _singleUseToken
@property (retain, nonatomic) NSNumber *sortValue; // ivar: _sortValue


-(NSInteger)_defaultSortGroup;
-(id)_actionImage;
-(id)activityTitle;
-(id)activityType;
-(id)initPartialShortcutWithName:(id)arg0 identifier:(id)arg1 image:(id)arg2 sortValue:(id)arg3 ;
-(id)initWithPartial:(id)arg0 ;
-(void)prepareWithActivityExtensionItemData:(id)arg0 ;


@end


#endif