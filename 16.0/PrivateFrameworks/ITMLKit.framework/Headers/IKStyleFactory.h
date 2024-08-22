// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKSTYLEFACTORY_H
#define IKSTYLEFACTORY_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IKStylesGroup.h"

@interface IKStyleFactory : NSObject <NSCopying>



@property (readonly, retain, nonatomic) NSMutableDictionary *styleListsByClassSelector; // ivar: _styleListsByClassSelector
@property (readonly, retain, nonatomic) IKStylesGroup *stylesGroup; // ivar: _stylesGroup


+(id)styleFactoryWithMarkup:(id)arg0 filterBlockedStyles:(BOOL)arg1 ;
-(id)_collapsedStyleListForSelectors:(id)arg0 targetSelector:(id)arg1 stylesGroup:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStylesGroup:(id)arg0 ;
-(id)styleListForClassSelector:(id)arg0 ;
-(void)setViewElementStylesDirty;


@end


#endif