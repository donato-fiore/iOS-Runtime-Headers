// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUICOLOR_H
#define CUICOLOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CUIColor : NSObject <NSCopying>



@property (readonly, nonatomic) *CGColor CGColor; // ivar: _cgColor


+(id)colorWithCGColor:(struct CGColor *)arg0 ;
+(id)colorWithCIColor:(id)arg0 ;
-(id)colorUsingCGColorSpace:(struct CGColorSpace *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(id)initWithCIColor:(id)arg0 ;
-(void)dealloc;


@end


#endif