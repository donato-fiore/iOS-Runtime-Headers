// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICELLACCESSORY_H
#define UICELLACCESSORY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UICellAccessory : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic, getter=_backgroundColor, setter=_setBackgroundColor:) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) NSInteger displayedState; // ivar: _displayedState
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic, getter=_identifier) NSString *identifier;
@property (readonly, nonatomic, getter=_isSystemType) BOOL isSystemType;
@property (nonatomic) CGFloat reservedLayoutWidth; // ivar: _reservedLayoutWidth
@property (readonly, nonatomic, getter=_systemType) NSInteger systemType;
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_defaultPlacementForHeader:(BOOL)arg0 ;
-(NSInteger)_systemTypePlacementForHeader:(BOOL)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif