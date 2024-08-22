// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINTERFACEACTIONHIGHLIGHTATTRIBUTES_H
#define UIINTERFACEACTIONHIGHLIGHTATTRIBUTES_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIInterfaceActionHighlightAttributes : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSArray *filters; // ivar: _filters
@property (nonatomic) CGFloat opacity; // ivar: _opacity


-(BOOL)_hasNonClearBackgroundColor;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)newBackgroundHighlightView;


@end


#endif