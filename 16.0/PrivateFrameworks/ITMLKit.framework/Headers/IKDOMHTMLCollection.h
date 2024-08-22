// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMHTMLCOLLECTION_H
#define IKDOMHTMLCOLLECTION_H

@protocol IKJSDOMHTMLCollection;


#import "IKJSObject.h"
#import "IKDOMNode.h"

@interface IKDOMHTMLCollection : IKJSObject <IKJSDOMHTMLCollection>



@property (readonly) NSUInteger length;
@property (weak, nonatomic) IKDOMNode *parentNode; // ivar: _parentNode


-(id)initWithAppContext:(id)arg0 node:(id)arg1 ;
-(id)item:(NSUInteger)arg0 ;


@end


#endif