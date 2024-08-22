// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSCOLOR_H
#define BSCOLOR_H

@class NSString;
@protocol NSCopying, BSXPCSecureCoding, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface BSColor : NSObject <NSCopying, BSXPCSecureCoding, NSSecureCoding, BSXPCCoding>

 {
    *CGColor _colorRef;
}


@property (readonly, nonatomic) *CGColor CGColor;
@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) CGFloat blue; // ivar: _blue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat green; // ivar: _green
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat red; // ivar: _red
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)blackColor;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToColor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif