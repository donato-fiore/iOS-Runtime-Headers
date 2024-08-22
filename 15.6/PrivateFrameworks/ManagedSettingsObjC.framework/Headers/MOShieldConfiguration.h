// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOSHIELDCONFIGURATION_H
#define MOSHIELDCONFIGURATION_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MOShieldLabel.h"

@interface MOShieldConfiguration : NSObject <NSSecureCoding>



@property (readonly, copy) NSData *backgroundColorData; // ivar: _backgroundColorData
@property (readonly, copy) NSData *backgroundEffectData; // ivar: _backgroundEffectData
@property (readonly, copy) NSData *iconData; // ivar: _iconData
@property (readonly, copy) NSData *primaryButtonColorData; // ivar: _primaryButtonColorData
@property (readonly) MOShieldLabel *primaryButtonLabel; // ivar: _primaryButtonLabel
@property (readonly) MOShieldLabel *secondaryButtonLabel; // ivar: _secondaryButtonLabel
@property (readonly) MOShieldLabel *subtitle; // ivar: _subtitle
@property (readonly) MOShieldLabel *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithBackgroundColorData:(id)arg0 backgroundEffectData:(id)arg1 iconData:(id)arg2 title:(id)arg3 subtitle:(id)arg4 primaryButtonLabel:(id)arg5 primaryButtonColorData:(id)arg6 secondaryButtonLabel:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif