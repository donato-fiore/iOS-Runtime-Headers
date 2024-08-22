// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIPRESENTATIONOPTIONS_H
#define SIRIPRESENTATIONOPTIONS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriPresentationOptions : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL hideOtherWindowsDuringAppearance; // ivar: _hideOtherWindowsDuringAppearance
@property (nonatomic) NSInteger rotationStyle; // ivar: _rotationStyle
@property (nonatomic) BOOL wakeScreen; // ivar: _wakeScreen


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif