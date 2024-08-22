// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISPLITVIEWTEMPLATEELEMENT_H
#define SKUISPLITVIEWTEMPLATEELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIJSDOMFeatureNavigationDocument.h"

@interface SKUISplitViewTemplateElement : SKUIViewElement {
    SKUIJSDOMFeatureNavigationDocument *_leftNavigationDocument;
    SKUIJSDOMFeatureNavigationDocument *_rightNavigationDocument;
}


@property (readonly) SKUIJSDOMFeatureNavigationDocument *leftNavigationDocument;
@property (readonly, nonatomic) SKUIViewElement *leftSplitElement;
@property (readonly, nonatomic) NSInteger preferredDisplayMode; // ivar: _preferredDisplayMode
@property (readonly) SKUIJSDOMFeatureNavigationDocument *rightNavigationDocument;
@property (readonly, nonatomic) SKUIViewElement *rightSplitElement;
@property (readonly, nonatomic) BOOL usesInlineSplitContent;


+(id)supportedFeatures;
-(id)_splitElementForIndex:(NSInteger)arg0 ;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif