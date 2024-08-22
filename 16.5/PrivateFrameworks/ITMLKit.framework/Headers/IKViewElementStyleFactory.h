// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKVIEWELEMENTSTYLEFACTORY_H
#define IKVIEWELEMENTSTYLEFACTORY_H


#import <Foundation/Foundation.h>

#import "IKStyleFactory.h"
#import "IKTemplateStyleSheet.h"

@interface IKViewElementStyleFactory : NSObject

@property (readonly, retain, nonatomic) IKStyleFactory *styleFactory; // ivar: _styleFactory
@property (readonly, nonatomic) IKTemplateStyleSheet *styleSheet; // ivar: _styleSheet


+(id)styleFactoryWithMarkup:(id)arg0 styleSheet:(id)arg1 ;
-(id)initWithMarkup:(id)arg0 styleSheet:(id)arg1 ;
-(id)styleComposerForElement:(id)arg0 elementStyleOverrides:(id)arg1 ;
-(void)setViewElementStylesDirty;


@end


#endif