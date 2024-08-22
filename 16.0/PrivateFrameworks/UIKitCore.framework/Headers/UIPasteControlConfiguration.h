// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPASTECONTROLCONFIGURATION_H
#define UIPASTECONTROLCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIPasteControlConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) BOOL _shouldLayoutSynchronously; // ivar: __shouldLayoutSynchronously
@property (retain, nonatomic) UIColor *baseBackgroundColor; // ivar: _baseBackgroundColor
@property (retain, nonatomic) UIColor *baseForegroundColor; // ivar: _baseForegroundColor
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) NSInteger cornerStyle; // ivar: _cornerStyle
@property (nonatomic) NSUInteger displayMode; // ivar: _displayMode


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif