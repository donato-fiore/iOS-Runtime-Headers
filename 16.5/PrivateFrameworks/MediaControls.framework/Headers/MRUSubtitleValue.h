// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUSUBTITLEVALUE_H
#define MRUSUBTITLEVALUE_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface MRUSubtitleValue : NSObject

@property (readonly, nonatomic) NSInteger accessory; // ivar: _accessory
@property (readonly, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqualToSubtitleValue:(id)arg0 ;
-(id)description;
-(id)initWithText:(id)arg0 icon:(id)arg1 accessory:(NSInteger)arg2 ;


@end


#endif