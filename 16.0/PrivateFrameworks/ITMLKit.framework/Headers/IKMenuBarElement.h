// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKMENUBARELEMENT_H
#define IKMENUBARELEMENT_H



#import "IKCollectionElement.h"
#import "IKAppMenuBarDocument.h"

@interface IKMenuBarElement : IKCollectionElement

@property (readonly, nonatomic) IKAppMenuBarDocument *menuBarDocument; // ivar: _menuBarDocument


+(id)supportedFeatures;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif