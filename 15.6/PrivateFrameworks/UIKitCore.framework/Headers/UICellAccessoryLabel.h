// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICELLACCESSORYLABEL_H
#define UICELLACCESSORYLABEL_H

@class UIFont, NSString;


#import "UICellAccessory.h"

@interface UICellAccessoryLabel : UICellAccessory

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_systemType;
-(NSInteger)_systemTypePlacementForHeader:(BOOL)arg0 ;
-(NSUInteger)hash;
-(id)_identifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif