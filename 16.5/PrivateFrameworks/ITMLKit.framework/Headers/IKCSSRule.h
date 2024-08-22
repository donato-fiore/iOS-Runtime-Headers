// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKCSSRULE_H
#define IKCSSRULE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IKCSSDeclarationList.h"
#import "IKCSSMediaQuery.h"
#import "IKCSSSelectorList.h"

@interface IKCSSRule : NSObject <NSCopying>



@property (retain, nonatomic) IKCSSDeclarationList *declarationList; // ivar: _declarationList
@property (readonly, nonatomic) IKCSSMediaQuery *mediaQuery;
@property (retain, nonatomic) IKCSSSelectorList *selectorList; // ivar: _selectorList


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif