// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUICHARTAXISLABEL_H
#define FIUICHARTAXISLABEL_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface FIUIChartAxisLabel : NSObject

@property (retain, nonatomic) UIColor *labelColor; // ivar: _labelColor
@property (retain, nonatomic) id *location; // ivar: _location
@property (nonatomic) CGFloat shadowBlur; // ivar: _shadowBlur
@property (nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (nonatomic) CGSize shadowOffset; // ivar: _shadowOffset
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) BOOL useReversePlacement; // ivar: _useReversePlacement


-(id)description;


@end


#endif