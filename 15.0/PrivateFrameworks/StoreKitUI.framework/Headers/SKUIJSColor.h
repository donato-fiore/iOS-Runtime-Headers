// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIJSCOLOR_H
#define SKUIJSCOLOR_H

@class IKJSObject;
@protocol SKUIJSColor;



@interface SKUIJSColor : IKJSObject <SKUIJSColor>



@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) NSUInteger blue; // ivar: _blue
@property (readonly, nonatomic) NSUInteger green; // ivar: _green
@property (readonly, nonatomic) NSUInteger red; // ivar: _red


-(id)description;
-(id)initWithAppContext:(id)arg0 color:(id)arg1 ;


@end


#endif