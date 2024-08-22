// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSWATCHCOLOR_H
#define PKSWATCHCOLOR_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface PKSwatchColor : NSObject

@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(id)swatchColor:(id)arg0 identifier:(id)arg1 ;
-(id)initWithColor:(id)arg0 identifier:(id)arg1 ;


@end


#endif