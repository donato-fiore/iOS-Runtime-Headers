// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUINAMEDMODEL_H
#define CUINAMEDMODEL_H

@class MDLAsset;


#import "CUINamedLookup.h"

@interface CUINamedModel : CUINamedLookup

@property (readonly, nonatomic) MDLAsset *asset;


-(id)_renditionForKey:(id)arg0 inThemeRef:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 ;


@end


#endif