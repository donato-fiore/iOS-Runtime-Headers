// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDISPLAYCATEGORY_H
#define HKDISPLAYCATEGORY_H

@class NSString, UIColor, UIImage;

#import <Foundation/Foundation.h>

#import "HKFillStyle.h"

@interface HKDisplayCategory : NSObject {
    id *_keyColor;
}


@property (readonly, nonatomic) NSInteger categoryID; // ivar: _categoryID
@property (readonly, nonatomic) NSString *categoryName; // ivar: _categoryName
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) HKFillStyle *fillStyle;
@property (readonly, nonatomic) UIImage *healthDataIcon;
@property (readonly, nonatomic) NSString *healthDataIconName; // ivar: _healthDataIconName
@property (readonly, nonatomic) BOOL isMeCategory;
@property (readonly, nonatomic) BOOL isTopLevelCategory;
@property (readonly, nonatomic) UIImage *largeListIcon;
@property (readonly, nonatomic) NSString *largeListIconName; // ivar: _largeListIconName
@property (readonly, nonatomic) UIImage *listIcon;
@property (readonly, nonatomic) NSString *listIconName; // ivar: _listIconName
@property (readonly, nonatomic) UIImage *shareIcon;
@property (readonly, nonatomic) NSString *shareIconName; // ivar: _shareIconName


+(id)topLevelCategoryIdentifiers;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif