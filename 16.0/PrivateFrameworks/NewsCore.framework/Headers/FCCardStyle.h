// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCARDSTYLE_H
#define FCCARDSTYLE_H

@class NSString;
@protocol FCCardStyleProviding;

#import <Foundation/Foundation.h>

#import "FCColor.h"
#import "FCColorGradient.h"

@interface FCCardStyle : NSObject <FCCardStyleProviding>



@property (copy, nonatomic) FCColor *cardBackgroundColor; // ivar: _cardBackgroundColor
@property (copy, nonatomic) FCColor *cardForegroundColor; // ivar: _cardForegroundColor
@property (copy, nonatomic) FCColor *ctaBackgroundColor; // ivar: _ctaBackgroundColor
@property (copy, nonatomic) FCColor *ctaForegroundColor; // ivar: _ctaForegroundColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) FCColor *eyebrowForegroundColor; // ivar: _eyebrowForegroundColor
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) FCColorGradient *sauceGradient; // ivar: _sauceGradient
@property (readonly) Class superclass;
@property (copy, nonatomic) FCColor *titleForegroundColor; // ivar: _titleForegroundColor


+(id)styleWithConfigDict:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTitleForegroundColor:(id)arg0 eyebrowForegroundColor:(id)arg1 cardBackgroundColor:(id)arg2 cardForegroundColor:(id)arg3 sauceGradient:(id)arg4 ctaBackgroundColor:(id)arg5 ctaForegroundColor:(id)arg6 ;


@end


#endif