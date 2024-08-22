// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDOMDOCUMENTFRAGMENT_H
#define IKDOMDOCUMENTFRAGMENT_H

@protocol IKJSDOMParentNode;


#import "IKDOMNode.h"
#import "IKDOMHTMLCollection.h"
#import "IKDOMElement.h"

@interface IKDOMDocumentFragment : IKDOMNode <IKJSDOMParentNode>



@property (readonly, nonatomic) NSUInteger childElementCount;
@property (readonly, nonatomic) IKDOMHTMLCollection *children;
@property (readonly, nonatomic) IKDOMElement *firstElementChild;
@property (readonly, nonatomic) IKDOMElement *lastElementChild;


-(NSInteger)nodeType;
-(id)nodeName;


@end


#endif