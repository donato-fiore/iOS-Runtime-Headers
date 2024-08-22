// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUICHARTSTEMPLATEVIEWELEMENT_H
#define SKUICHARTSTEMPLATEVIEWELEMENT_H

@class NSString, NSArray;


#import "SKUIViewElement.h"
#import "SKUIActivityIndicatorViewElement.h"
#import "SKUINavigationBarViewElement.h"

@interface SKUIChartsTemplateViewElement : SKUIViewElement {
    NSString *_type;
}


@property (readonly, nonatomic) SKUIActivityIndicatorViewElement *activityIndicator;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property (readonly, nonatomic) NSString *type;


-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif