// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIBARBUTTONITEMSTATEAPPEARANCE_H
#define UIBARBUTTONITEMSTATEAPPEARANCE_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "UIBarButtonItemAppearance.h"
#import "UIImage.h"
#import "_UIBarButtonItemData.h"

@interface UIBarButtonItemStateAppearance : NSObject {
    UIBarButtonItemAppearance *_owner;
    NSInteger _state;
}


@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) UIOffset backgroundImagePositionAdjustment;
@property (retain, nonatomic) _UIBarButtonItemData *data; // ivar: _data
@property (copy, nonatomic) NSArray *itemEffects; // ivar: _itemEffects
@property (nonatomic) UIOffset titlePositionAdjustment;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;


-(id)_initWithOwner:(id)arg0 data:(id)arg1 state:(NSInteger)arg2 ;
-(id)init;
-(void)_clearOwner;
-(void)_writeToStorage:(id)arg0 ;


@end


#endif