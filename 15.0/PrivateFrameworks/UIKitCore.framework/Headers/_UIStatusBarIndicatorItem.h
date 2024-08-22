// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARINDICATORITEM_H
#define _UISTATUSBARINDICATORITEM_H

@class NSArray, NSString;


#import "UIStatusBarItem.h"
#import "_UIStatusBarImageView.h"

@interface _UIStatusBarIndicatorItem : UIStatusBarItem

@property (copy, nonatomic) NSArray *currentImageNamePrefixes; // ivar: _currentImageNamePrefixes
@property (readonly, nonatomic) BOOL flipsForRightToLeftLayoutDirection;
@property (retain, nonatomic) _UIStatusBarImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) NSString *indicatorEntryKey;
@property (readonly, nonatomic) BOOL isTemplateImage;


-(BOOL)shouldUpdateIndicatorForIdentifier:(id)arg0 ;
-(BOOL)useMultiColorSystemImageForUpdate:(id)arg0 ;
-(id)applyUpdate:(id)arg0 toDisplayItem:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)imageForUpdate:(id)arg0 ;
-(id)imageNameForUpdate:(id)arg0 ;
-(id)imageViewForIdentifier:(id)arg0 ;
-(id)systemImageNameForUpdate:(id)arg0 ;
-(id)viewForIdentifier:(id)arg0 ;


@end


#endif