// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCVEGAHTMLELEMENT_H
#define TCVEGAHTMLELEMENT_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol TCVegaHTMLElementInterface;

#import <Foundation/Foundation.h>

#import "TCVegaCSSStyleDeclaration.h"

@interface TCVegaHTMLElement : NSObject <TCVegaHTMLElementInterface>



@property (retain, nonatomic) NSMutableArray *childNodes; // ivar: childNodes
@property (retain, nonatomic) NSMutableDictionary *events; // ivar: events
@property (retain, nonatomic) TCVegaCSSStyleDeclaration *style; // ivar: style
@property (retain, nonatomic) NSString *tagName; // ivar: tagName


-(id)appendWithChild:(id)arg0 ;
-(id)getBoundingClientRect;
-(id)init;
-(id)initWithTagName:(id)arg0 ;
-(id)parentNode;
-(id)removeWithChild:(id)arg0 ;
-(void)addEventListenerWithType:(id)arg0 listener:(id)arg1 ;
-(void)setAttributeWithName:(id)arg0 value:(id)arg1 ;


@end


#endif