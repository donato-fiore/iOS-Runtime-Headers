// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKCOLLECTIONELEMENT_H
#define IKCOLLECTIONELEMENT_H

@class NSArray;


#import "IKViewElement.h"
#import "IKAppBrowserBridge.h"
#import "IKHeaderElement.h"

@interface IKCollectionElement : IKViewElement {
    NSArray *_sections;
}


@property (readonly, nonatomic) IKAppBrowserBridge *browserBridge; // ivar: _browserBridge
@property (readonly, retain, nonatomic) IKHeaderElement *header;
@property (readonly, retain, nonatomic) NSArray *sections;


+(id)supportedFeaturesForElementName:(id)arg0 ;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(void)appDocumentDidMarkStylesDirty;


@end


#endif