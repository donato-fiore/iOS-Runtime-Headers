// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRCBUTTON_H
#define TVRCBUTTON_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TVRCButton : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) BOOL hasTapAction; // ivar: _hasTapAction
@property (readonly, copy, nonatomic) NSDictionary *properties; // ivar: _properties


+(BOOL)_isMediaButtonEvent:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToButton:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithButtonType:(NSInteger)arg0 ;
-(id)_initWithButtonType:(NSInteger)arg0 hasTapAction:(BOOL)arg1 properties:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif