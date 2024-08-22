// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKLEGENDENTRY_H
#define HKLEGENDENTRY_H

@class UIColor, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface HKLegendEntry : NSObject

@property (retain, nonatomic) UIColor *dotColor; // ivar: _dotColor
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (retain, nonatomic) UIColor *iconTint; // ivar: _iconTint
@property (retain, nonatomic) UIColor *innerDotColor; // ivar: _innerDotColor
@property (retain, nonatomic) UIColor *labelColor; // ivar: _labelColor
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)legendEntryWithTitle:(id)arg0 dotColor:(id)arg1 innerDotColor:(id)arg2 ;
+(id)legendEntryWithTitle:(id)arg0 icon:(id)arg1 iconTint:(id)arg2 ;
+(id)legendEntryWithTitle:(id)arg0 labelColor:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithTitle:(id)arg0 dotColor:(id)arg1 innerDotColor:(id)arg2 labelColor:(id)arg3 icon:(id)arg4 iconTint:(id)arg5 ;


@end


#endif