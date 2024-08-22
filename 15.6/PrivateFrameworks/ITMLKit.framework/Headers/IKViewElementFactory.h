// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKVIEWELEMENTFACTORY_H
#define IKVIEWELEMENTFACTORY_H


#import <Foundation/Foundation.h>

#import "IKViewElementRegistry.h"
#import "IKViewElementStyleFactory.h"

@interface IKViewElementFactory : NSObject {
    ? _parsingFlags;
    IKViewElementRegistry *_elementRegistry;
}


@property (nonatomic, getter=isSparse) BOOL sparse;
@property (retain, nonatomic) IKViewElementStyleFactory *styleFactory; // ivar: _styleFactory


+(BOOL)elementsForDocumentElement:(id)arg0 context:(id)arg1 ;
+(BOOL)isDependentByTagName:(id)arg0 ;
+(Class)elementClassByTagName:(id)arg0 ;
+(void)initialize;
+(void)registerClass:(Class)arg0 forElementName:(id)arg1 elementType:(NSUInteger)arg2 ;
+(void)registerClass:(Class)arg0 forElementName:(id)arg1 elementType:(NSUInteger)arg2 dependent:(BOOL)arg3 ;
-(Class)elementClassByTagName:(id)arg0 ;
-(NSUInteger)elementTypeByTagName:(id)arg0 ;
-(id)elementForDOMElement:(id)arg0 parent:(id)arg1 ;
-(id)initWithElementRegistry:(id)arg0 ;


@end


#endif