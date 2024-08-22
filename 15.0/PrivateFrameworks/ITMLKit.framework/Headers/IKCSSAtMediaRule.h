// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKCSSATMEDIARULE_H
#define IKCSSATMEDIARULE_H

@protocol NSCopying;


#import "IKCSSRule.h"
#import "IKCSSMediaQuery.h"

@interface IKCSSAtMediaRule : IKCSSRule <NSCopying>

 {
    IKCSSMediaQuery *_mediaQuery;
}


@property (nonatomic) _NSRange queryRange; // ivar: _queryRange


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMediaQuery:(id)arg0 ;
-(id)mediaQuery;


@end


#endif