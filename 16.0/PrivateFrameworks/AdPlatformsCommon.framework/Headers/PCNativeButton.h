// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCNATIVEBUTTON_H
#define PCNATIVEBUTTON_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PCNativeButtonStyle.h"

@interface PCNativeButton : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accessibleText; // ivar: _accessibleText
@property (retain, nonatomic) PCNativeButtonStyle *style; // ivar: _style
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif