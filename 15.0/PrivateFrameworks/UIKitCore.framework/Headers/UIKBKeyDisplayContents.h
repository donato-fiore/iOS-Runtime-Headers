// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBKEYDISPLAYCONTENTS_H
#define UIKBKEYDISPLAYCONTENTS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "UIKBKeyDisplayContents.h"

@interface UIKBKeyDisplayContents : NSObject

@property (retain, nonatomic) NSString *bundlePathOverride; // ivar: _bundlePathOverride
@property (nonatomic) NSInteger displayPathType; // ivar: _displayPathType
@property (retain, nonatomic) NSString *displayString; // ivar: _displayString
@property (retain, nonatomic) NSString *displayStringImage; // ivar: _displayStringImage
@property (retain, nonatomic) UIKBKeyDisplayContents *fallbackContents; // ivar: _fallbackContents
@property (nonatomic) BOOL fillPath; // ivar: _fillPath
@property (nonatomic) BOOL flipImageHorizontally; // ivar: _flipImageHorizontally
@property (nonatomic) BOOL force1xImages; // ivar: _force1xImages
@property (nonatomic) BOOL forceImageKeycap; // ivar: _forceImageKeycap
@property (retain, nonatomic) NSArray *highlightedVariantsList; // ivar: _highlightedVariantsList
@property (retain, nonatomic) NSArray *secondaryDisplayStringImages; // ivar: _secondaryDisplayStringImages
@property (retain, nonatomic) NSArray *secondaryDisplayStrings; // ivar: _secondaryDisplayStrings
@property (nonatomic) BOOL stringKeycapOverImage; // ivar: _stringKeycapOverImage
@property (retain, nonatomic) NSArray *variantDisplayContents; // ivar: _variantDisplayContents


+(id)displayContents;
-(id)description;
-(void)dealloc;


@end


#endif