// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLAPPEARANCE_H
#define QLAPPEARANCE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLAppearance : NSObject <NSSecureCoding>



@property (readonly) CGFloat bottomInset; // ivar: _bottomInset
@property (readonly) UIEdgeInsets peripheryInsets; // ivar: _peripheryInsets
@property (readonly) NSUInteger presentationMode; // ivar: _presentationMode
@property (readonly) CGFloat topInset; // ivar: _topInset


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopInset:(CGFloat)arg0 bottomInset:(CGFloat)arg1 presentationMode:(NSUInteger)arg2 peripheryInsets:(struct UIEdgeInsets )arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif