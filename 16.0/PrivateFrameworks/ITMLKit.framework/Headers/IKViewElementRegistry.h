// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKVIEWELEMENTREGISTRY_H
#define IKVIEWELEMENTREGISTRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IKViewElementRegistry : NSObject {
    NSMutableDictionary *_classMap;
    NSMutableDictionary *_typeMap;
    NSMutableDictionary *_dependentMap;
}




-(BOOL)isDependentByTagName:(id)arg0 ;
-(Class)elementClassByTagName:(id)arg0 ;
-(NSUInteger)elementTypeByTagName:(id)arg0 ;
-(id)init;
-(void)registerClass:(Class)arg0 forElementName:(id)arg1 elementType:(NSUInteger)arg2 ;
-(void)registerClass:(Class)arg0 forElementName:(id)arg1 elementType:(NSUInteger)arg2 dependent:(BOOL)arg3 ;


@end


#endif