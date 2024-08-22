// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKSECURECODINGCGCOLORWRAPPER_H
#define WKSECURECODINGCGCOLORWRAPPER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WKSecureCodingCGColorWrapper : NSObject <NSSecureCoding>

 {
    RetainPtr<CGColor *> m_wrappedColor;
}


@property (readonly, nonatomic) *CGColor wrappedColor;


+(BOOL)supportsSecureCoding;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif