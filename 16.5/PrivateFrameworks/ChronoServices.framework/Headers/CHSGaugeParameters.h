// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSGAUGEPARAMETERS_H
#define CHSGAUGEPARAMETERS_H

@class NSString, NSArray, NSAttributedString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSGaugeParameters : NSObject <BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat fraction; // ivar: _fraction
@property (readonly, copy, nonatomic) NSArray *gradientColors; // ivar: _gradientColors
@property (readonly, copy, nonatomic) NSArray *gradientLocations; // ivar: _gradientLocations
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSAttributedString *leadingText; // ivar: _leadingText
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSAttributedString *trailingText; // ivar: _trailingText


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithLeadingText:(id)arg0 trailingText:(id)arg1 style:(NSUInteger)arg2 gradientColors:(id)arg3 gradientLocations:(id)arg4 fraction:(CGFloat)arg5 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif