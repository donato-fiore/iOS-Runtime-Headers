// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCVEGAHTMLELEMENT_H
#define CCVEGAHTMLELEMENT_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol CCVegaHTMLElementInterface;

#import <Foundation/Foundation.h>

#import "CCVegaCSSStyleDeclaration.h"

@interface CCVegaHTMLElement : NSObject <CCVegaHTMLElementInterface>



@property (retain, nonatomic) NSMutableArray *childNodes; // ivar: childNodes
@property (nonatomic) CGFloat clientHeight; // ivar: clientHeight
@property (nonatomic) CGFloat clientWidth; // ivar: clientWidth
@property (retain, nonatomic) NSMutableDictionary *events; // ivar: events
@property (retain, nonatomic) NSObject<CCVegaHTMLElementInterface> *parentNode; // ivar: parentNode
@property (retain, nonatomic) CCVegaCSSStyleDeclaration *style; // ivar: style
@property (retain, nonatomic) NSString *tagName; // ivar: tagName


-(id)appendWithChild:(id)arg0 ;
-(id)getBoundingClientRect;
-(id)init;
-(id)initWithTagName:(id)arg0 ;
-(id)prependWithChild:(id)arg0 ;
-(id)removeWithChild:(id)arg0 ;
-(void)addEventListenerWithType:(id)arg0 listener:(id)arg1 ;
-(void)recursiveSetSize:(struct CGSize )arg0 ;
-(void)removeEventListenerWithType:(id)arg0 listener:(id)arg1 ;
-(void)setAttributeWithName:(id)arg0 value:(id)arg1 ;


@end


#endif