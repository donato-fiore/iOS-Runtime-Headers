// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUFILMSTRIPVIEWINDICATORINFO_H
#define PUFILMSTRIPVIEWINDICATORINFO_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface PUFilmStripViewIndicatorInfo : NSObject

@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) CGFloat normalizedLocation; // ivar: _normalizedLocation


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithLocation:(CGFloat)arg0 color:(id)arg1 ;


@end


#endif