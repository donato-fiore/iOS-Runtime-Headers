// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef XBDISPLAYEDGEINSETSWRAPPER_H
#define XBDISPLAYEDGEINSETSWRAPPER_H

@class NSString;
@protocol NSCopying, BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface XBDisplayEdgeInsetsWrapper : NSObject <NSCopying, BSXPCCoding, NSSecureCoding>



@property (readonly, nonatomic) CGFloat bottomInset; // ivar: _bottomInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat leftInset; // ivar: _leftInset
@property (readonly, nonatomic) CGFloat rightInset; // ivar: _rightInset
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat topInset; // ivar: _topInset


+(BOOL)supportsSecureCoding;
+(id)makeWithEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(BOOL)hasZeroInsets;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTop:(CGFloat)arg0 left:(CGFloat)arg1 bottom:(CGFloat)arg2 right:(CGFloat)arg3 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(struct UIEdgeInsets )edgeInsets;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif