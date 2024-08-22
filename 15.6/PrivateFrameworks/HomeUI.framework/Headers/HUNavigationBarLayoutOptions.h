// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNAVIGATIONBARLAYOUTOPTIONS_H
#define HUNAVIGATIONBARLAYOUTOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HUNavigationBarLayoutOptions : NSObject <NSCopying>



@property (nonatomic) CGFloat bottomMargin; // ivar: _bottomMargin
@property (nonatomic) CGFloat containerLeadingMargin; // ivar: _containerLeadingMargin
@property (nonatomic) CGFloat containerTrailingMargin; // ivar: _containerTrailingMargin
@property (nonatomic) CGFloat height; // ivar: _height
@property (readonly, nonatomic) CGFloat leadingMargin;
@property (nonatomic) CGFloat topMargin; // ivar: _topMargin
@property (readonly, nonatomic) CGFloat trailingMargin;
@property (readonly, nonatomic) NSInteger viewSizeSubclass; // ivar: _viewSizeSubclass


+(id)defaultOptionsForViewSizeSubclass:(NSInteger)arg0 containerLeadingMargin:(CGFloat)arg1 containerTrailingMargin:(CGFloat)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithViewSizeSubclass:(NSInteger)arg0 ;


@end


#endif