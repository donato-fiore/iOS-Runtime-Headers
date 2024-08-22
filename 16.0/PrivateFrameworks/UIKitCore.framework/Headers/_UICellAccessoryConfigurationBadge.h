// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICELLACCESSORYCONFIGURATIONBADGE_H
#define _UICELLACCESSORYCONFIGURATIONBADGE_H

@class UIFont, NSString;


#import "UICellAccessoryConfiguration.h"

@interface _UICellAccessoryConfigurationBadge : UICellAccessoryConfiguration

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_systemType;
-(NSUInteger)hash;
-(id)_identifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif