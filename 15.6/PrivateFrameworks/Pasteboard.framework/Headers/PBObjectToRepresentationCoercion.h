// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBOBJECTTOREPRESENTATIONCOERCION_H
#define PBOBJECTTOREPRESENTATIONCOERCION_H

@class NSMutableDictionary, NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface PBObjectToRepresentationCoercion : NSObject

@property (retain, nonatomic) NSMutableDictionary *coercionBlockByType; // ivar: _coercionBlockByType
@property (retain, nonatomic) Class theClass; // ivar: _theClass
@property (retain, nonatomic) NSMutableOrderedSet *typeOrder; // ivar: _typeOrder


-(BOOL)canCoerceToType:(id)arg0 ;
-(id)availableExportTypes;
-(id)initWithClass:(Class)arg0 ;
-(void)addCoercionToType:(id)arg0 block:(id)arg1 ;
-(void)createRepresentationOfType:(id)arg0 fromObject:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif