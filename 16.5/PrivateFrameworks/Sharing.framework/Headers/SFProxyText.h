// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPROXYTEXT_H
#define SFPROXYTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFProxyText : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned int slotIdentifier; // ivar: _slotIdentifier
@property (readonly, nonatomic) CGFloat slotTextHeight; // ivar: _slotTextHeight
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSlotIdentifier:(unsigned int)arg0 ;
-(id)initWithSlotIdentifier:(unsigned int)arg0 slotTextHeight:(CGFloat)arg1 ;
-(id)initWithText:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif