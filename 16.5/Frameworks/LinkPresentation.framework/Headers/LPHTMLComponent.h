// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPHTMLCOMPONENT_H
#define LPHTMLCOMPONENT_H

@class NSMutableArray, DOMElement, NSString;

#import <Foundation/Foundation.h>

#import "LPLinkHTMLGenerator.h"

@interface LPHTMLComponent : NSObject {
    NSMutableArray *_children;
}


@property (readonly, nonatomic) DOMElement *element; // ivar: _element
@property (readonly, weak, nonatomic) LPLinkHTMLGenerator *generator; // ivar: _generator
@property (readonly, nonatomic) NSString *themePath; // ivar: _themePath


+(id)ruleDictionaryForStyle:(id)arg0 ;
-(id)childThemePathWithName:(id)arg0 ;
-(id)initWithTagName:(id)arg0 themePath:(id)arg1 generator:(id)arg2 ;
-(void)addChild:(id)arg0 ;


@end


#endif