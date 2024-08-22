// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERSPACETITLEITEM_H
#define SBFLUIDSWITCHERSPACETITLEITEM_H

@class UIImage, NSString, UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBDisplayItem.h"

@interface SBFluidSwitcherSpaceTitleItem : NSObject <NSCopying>



@property (readonly, nonatomic) SBDisplayItem *displayItem; // ivar: _displayItem
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL showsMultiWindowIndicator; // ivar: _showsMultiWindowIndicator
@property (nonatomic) NSInteger subtitleInterfaceStyle; // ivar: _subtitleInterfaceStyle
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) UIColor *titleTextColor; // ivar: _titleTextColor


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDisplayItem:(id)arg0 ;


@end


#endif