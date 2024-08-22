// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPITEMTOURLRESOURCESCONVERTER_H
#define FPITEMTOURLRESOURCESCONVERTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FPItemToURLResourcesConverter : NSObject {
    NSMutableDictionary *_gettersByURLKey;
    NSMutableDictionary *_typesByURLKey;
}




+(id)dictionaryFromItem:(id)arg0 requestedKeys:(id)arg1 ;
-(id)_dictionaryFromItem:(id)arg0 requestedKeys:(id)arg1 ;
-(id)initWithItemClass:(Class)arg0 ;
-(void)_addHelperMethodsToClass:(Class)arg0 ;
-(void)_addMethod:(SEL)arg0 toClass:(Class)arg1 ;
-(void)_cacheImplementedPropertiesForClass:(Class)arg0 ;


@end


#endif