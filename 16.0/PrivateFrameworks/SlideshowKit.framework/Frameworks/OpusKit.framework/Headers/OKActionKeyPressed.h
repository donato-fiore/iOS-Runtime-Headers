// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKACTIONKEYPRESSED_H
#define OKACTIONKEYPRESSED_H

@class NSString;
@protocol OKActionKeyPressedExports, NSSecureCoding;


#import "OKAction.h"

@interface OKActionKeyPressed : OKAction <OKActionKeyPressedExports, NSSecureCoding>



@property (readonly, nonatomic) BOOL isKeyUp; // ivar: isKeyUp
@property (retain, nonatomic) NSString *keyPressed; // ivar: keyPressed
@property (readonly, nonatomic) CGFloat timestamp; // ivar: timestamp


+(BOOL)supportsSecureCoding;
+(id)keyPressedActionWithKey:(id)arg0 atTime:(CGFloat)arg1 isKeyUp:(BOOL)arg2 withLocation:(struct CGPoint )arg3 context:(id)arg4 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif