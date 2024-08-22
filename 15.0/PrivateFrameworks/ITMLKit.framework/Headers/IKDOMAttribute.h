// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKDOMATTRIBUTE_H
#define IKDOMATTRIBUTE_H

@class NSString;
@protocol IKJSDOMAttribute;


#import "IKDOMNode.h"

@interface IKDOMAttribute : IKDOMNode <IKJSDOMAttribute>



@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) IKDOMNode *ownerElement;
@property (readonly, nonatomic) NSString *value;


-(?)initWithAppContextxmlNode;
-(BOOL)dispatchEvent:(id)arg0 ;
-(BOOL)hasChildNodes;
-(NSInteger)nodeType;
-(id)appendChild:(id)arg0 ;
-(id)childNodes;
-(id)cloneNode:(BOOL)arg0 ;
-(id)firstChild;
-(id)getFeature:(id)arg0 ;
-(id)insertBefore:(id)arg0 ;
-(id)lastChild;
-(id)nextSibling;
-(id)nodeName;
-(id)nodeValue;
-(id)previousSibling;
-(id)removeChild:(id)arg0 ;
-(id)replaceChild:(id)arg0 ;
-(id)textContent;
-(void)addEventListener:(id)arg0 ;
-(void)removeEventListener:(id)arg0 ;


@end


#endif