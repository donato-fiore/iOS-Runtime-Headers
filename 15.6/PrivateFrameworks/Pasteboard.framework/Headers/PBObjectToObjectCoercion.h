// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBOBJECTTOOBJECTCOERCION_H
#define PBOBJECTTOOBJECTCOERCION_H

@class NSMutableDictionary, NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface PBObjectToObjectCoercion : NSObject

@property (retain, nonatomic) NSMutableDictionary *blockByClass; // ivar: _blockByClass
@property (retain, nonatomic) NSMutableOrderedSet *orderedClassNames; // ivar: _orderedClassNames
@property (retain, nonatomic) Class theClass; // ivar: _theClass


-(BOOL)canCoerceToObjectOfClass:(Class)arg0 ;
-(id)availableClasses;
-(id)coerceObject:(id)arg0 toObjectOfClass:(Class)arg1 outError:(*id)arg2 ;
-(id)initWithClass:(Class)arg0 ;
-(void)addCoercionToClass:(Class)arg0 block:(id)arg1 ;


@end


#endif