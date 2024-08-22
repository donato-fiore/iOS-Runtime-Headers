// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSREGIONMAPENTRY_H
#define _UIFOCUSREGIONMAPENTRY_H

@class NSMutableSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UIFocusRegionMapEntry.h"
#import "UIColor.h"

@interface _UIFocusRegionMapEntry : NSObject <NSCopying>



@property (nonatomic) CGRect frame; // ivar: _frame
@property (retain, nonatomic) NSMutableSet *occludingFrames; // ivar: _occludingFrames
@property (retain, nonatomic) _UIFocusRegionMapEntry *originalEntry; // ivar: _originalEntry
@property (nonatomic) CGRect originalRegionFrame; // ivar: _originalRegionFrame
@property (retain, nonatomic) _UIFocusRegionMapEntry *parentEntry; // ivar: _parentEntry
@property (readonly, copy, nonatomic) UIColor *visualRepresentationColor;
@property (readonly, nonatomic) NSInteger visualRepresentationPatternType;


-(id)_mapEntriesByOccludingWithFrame:(struct CGRect )arg0 ;
-(id)_uniqueElementFromArray:(id)arg0 forKey:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 originalRegionFrame:(struct CGRect )arg1 ;
-(id)sliceWithFrame:(struct CGRect )arg0 ;
-(void)_wasOccludedByFrame:(struct CGRect )arg0 ;


@end


#endif