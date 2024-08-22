// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACECARDACTIONITEM_H
#define MKPLACECARDACTIONITEM_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>

#import "MKPlaceActionItemAppearanceProvider.h"
#import "MKPlaceCardActionItem.h"

@interface MKPlaceCardActionItem : NSObject {
    MKPlaceActionItemAppearanceProvider *_appearanceProvider;
}


@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, copy, nonatomic) NSString *displayString;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSString *glyph;
@property (retain, nonatomic) UIColor *glyphColor; // ivar: _glyphColor
@property (nonatomic) BOOL selected; // ivar: _selected
@property (retain, nonatomic) MKPlaceCardActionItem *selectedItem; // ivar: _selectedItem
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)actionItemWithType:(NSUInteger)arg0 ;
+(id)actionItemWithType:(NSUInteger)arg0 actionDataProvider:(id)arg1 enabled:(BOOL)arg2 ;
+(id)actionTypesToMenuElements:(id)arg0 menuElementCreationBlock:(id)arg1 ;
+(id)buildActionMenuForItems:(id)arg0 buildingOptions:(id)arg1 menuElementCreationBlock:(id)arg2 ;
-(BOOL)isDestructiveForDisplayStyle:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 appearanceProvider:(id)arg1 enabled:(BOOL)arg2 ;
-(id)initWithType:(NSUInteger)arg0 displayString:(id)arg1 glyph:(id)arg2 enabled:(BOOL)arg3 ;
-(id)menuElementWithActionHandler:(id)arg0 ;
-(id)resolvedActionItem;
-(id)symbolForDisplayStyle:(NSUInteger)arg0 ;
-(id)titleForDisplayStyle:(NSUInteger)arg0 ;


@end


#endif