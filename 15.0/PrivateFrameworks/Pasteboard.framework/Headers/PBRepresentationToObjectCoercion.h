// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBREPRESENTATIONTOOBJECTCOERCION_H
#define PBREPRESENTATIONTOOBJECTCOERCION_H

@class NSMutableDictionary, NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface PBRepresentationToObjectCoercion : NSObject

@property (retain, nonatomic) NSMutableDictionary *blockByType; // ivar: _blockByType
@property (retain, nonatomic) Class theClass; // ivar: _theClass
@property (retain, nonatomic) NSMutableOrderedSet *typeOrder; // ivar: _typeOrder


-(BOOL)canCoerceFromType:(id)arg0 ;
-(id)availableImportTypes;
-(id)createObjectFromRepresentationConformingToType:(id)arg0 data:(id)arg1 URL:(id)arg2 outError:(*id)arg3 ;
-(id)initWithClass:(Class)arg0 ;
-(void)addCoercionFromType:(id)arg0 block:(id)arg1 ;


@end


#endif