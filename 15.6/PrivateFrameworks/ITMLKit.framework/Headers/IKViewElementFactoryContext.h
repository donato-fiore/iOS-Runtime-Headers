// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKVIEWELEMENTFACTORYCONTEXT_H
#define IKVIEWELEMENTFACTORYCONTEXT_H


#import <Foundation/Foundation.h>

#import "IKViewElement.h"
#import "IKViewElementStyleFactory.h"

@interface IKViewElementFactoryContext : NSObject

@property (retain, nonatomic) IKViewElement *headViewElement; // ivar: _headViewElement
@property (retain, nonatomic) IKViewElement *navigationBarViewElement; // ivar: _navigationBarViewElement
@property (retain, nonatomic) IKViewElementStyleFactory *styleFactory; // ivar: _styleFactory
@property (retain, nonatomic) IKViewElement *templateViewElement; // ivar: _templateViewElement
@property (retain, nonatomic) IKViewElement *toolBarViewElement; // ivar: _toolBarViewElement
@property (nonatomic) NSUInteger updateType; // ivar: _updateType




@end


#endif