// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISTOREPAGESPLIT_H
#define SKUISTOREPAGESPLIT_H

@class UIColor, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SKUIStorePageSectionContext.h"

@interface SKUIStorePageSplit : NSObject <NSCopying>



@property (copy, nonatomic) UIColor *dividerColor; // ivar: _dividerColor
@property (nonatomic) NSInteger numberOfPageSections; // ivar: _numberOfPageSections
@property (copy, nonatomic) NSArray *pageComponents; // ivar: _pageComponents
@property (retain, nonatomic) SKUIStorePageSectionContext *sectionContext; // ivar: _sectionContext
@property (nonatomic) CGFloat widthFraction; // ivar: _widthFraction


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif