// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACECARDACTIONITEM_H
#define MKPLACECARDACTIONITEM_H

@class UIColor, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "_MKMapItemAttribution.h"
#import "MKPlaceCardActionItem.h"

@interface MKPlaceCardActionItem : NSObject

@property (readonly, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (retain, nonatomic) _MKMapItemAttribution *attribution; // ivar: _attribution
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, copy, nonatomic) NSString *displayString; // ivar: _displayString
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *glyph; // ivar: _glyph
@property (retain, nonatomic) UIColor *glyphColor; // ivar: _glyphColor
@property (readonly, nonatomic) BOOL isDestructive;
@property (nonatomic) BOOL selected; // ivar: _selected
@property (retain, nonatomic) MKPlaceCardActionItem *selectedItem; // ivar: _selectedItem
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSArray *urlStrings; // ivar: _urlStrings
@property (retain, nonatomic) id *value; // ivar: _value


+(id)actionTypesToMenuElements:(id)arg0 menuElementCreationBlock:(id)arg1 ;
+(id)buildActionMenuForItems:(id)arg0 buildingOptions:(id)arg1 menuElementCreationBlock:(id)arg2 ;
-(id)description;
-(id)initWithActionBlock:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 displayString:(id)arg1 enabled:(BOOL)arg2 ;
-(id)initWithType:(NSUInteger)arg0 displayString:(id)arg1 enabled:(BOOL)arg2 urlStrings:(id)arg3 attribution:(id)arg4 ;
-(id)menuElementWithActionHandler:(id)arg0 ;
-(id)resolvedActionItem;


@end


#endif