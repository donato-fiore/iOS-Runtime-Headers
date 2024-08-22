// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUINAMEDCOLOR_H
#define CUINAMEDCOLOR_H

@class NSString;


#import "CUINamedLookup.h"

@interface CUINamedColor : CUINamedLookup {
    *CGColor _cgColor;
}


@property (readonly, nonatomic) *CGColor cgColor;
@property (readonly, nonatomic) BOOL substituteWithSystemColor; // ivar: _substituteWithSystemColor
@property (readonly, nonatomic) NSString *systemColorName; // ivar: _colorName


-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif