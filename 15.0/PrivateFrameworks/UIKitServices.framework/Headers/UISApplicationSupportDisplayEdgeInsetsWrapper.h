// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISAPPLICATIONSUPPORTDISPLAYEDGEINSETSWRAPPER_H
#define UISAPPLICATIONSUPPORTDISPLAYEDGEINSETSWRAPPER_H

@class NSString;
@protocol BSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface UISApplicationSupportDisplayEdgeInsetsWrapper : NSObject <BSXPCCoding, NSCopying>



@property (nonatomic) CGFloat bottomInset; // ivar: _bottomInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat leftInset; // ivar: _leftInset
@property (nonatomic) CGFloat rightInset; // ivar: _rightInset
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topInset; // ivar: _topInset


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTop:(CGFloat)arg0 left:(CGFloat)arg1 bottom:(CGFloat)arg2 right:(CGFloat)arg3 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif