// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ESDCONTAINER_H
#define ESDCONTAINER_H

@class NSMutableArray;


#import "ESDObject.h"

@interface ESDContainer : ESDObject {
    NSMutableArray *mChildren;
}




+(void)pbReadChildrenOfObject:(struct EshObject *)arg0 toArray:(id)arg1 state:(id)arg2 ;
+(void)readChildrenOfObject:(struct EshObject *)arg0 reader:(struct OcReader *)arg1 toArray:(id)arg2 ;
-(*void)eshContainer;
-(*void)eshGroup;
-(NSUInteger)childCount;
-(NSUInteger)indexOfFirstChildOfType:(unsigned short)arg0 afterIndex:(NSUInteger)arg1 ;
-(id)addChildOfType:(unsigned short)arg0 ;
-(id)addContainerChildOfType:(unsigned short)arg0 ;
-(id)addEshChild:(struct EshObject *)arg0 ;
-(id)addPptContainerChildOfType:(unsigned short)arg0 ;
-(id)addPptEshClientChildOfType:(unsigned short)arg0 ;
-(id)childAt:(NSUInteger)arg0 ;
-(id)childOfType:(unsigned short)arg0 instance:(short)arg1 ;
-(id)containerChildAt:(NSUInteger)arg0 ;
-(id)containerChildOfType:(unsigned short)arg0 instance:(short)arg1 mustExist:(BOOL)arg2 ;
-(id)containerFromObject:(id)arg0 mustExist:(BOOL)arg1 ;
-(id)firstChildOfType:(unsigned short)arg0 ;
-(id)firstChildOfType:(unsigned short)arg0 afterChild:(id)arg1 ;
-(id)firstChildOfType:(unsigned short)arg0 afterIndex:(NSUInteger)arg1 ;
-(id)firstContainerChildOfType:(unsigned short)arg0 mustExist:(BOOL)arg1 ;
-(id)initForExcelBinaryWithType:(unsigned short)arg0 version:(unsigned short)arg1 state:(id)arg2 ;
-(id)initFromReader:(struct OcReader *)arg0 type:(unsigned short)arg1 version:(unsigned short)arg2 ;
-(id)initPBWithType:(unsigned short)arg0 version:(unsigned short)arg1 state:(id)arg2 ;
-(id)initWithEshObject:(struct EshObject *)arg0 ;
-(id)insertEshChild:(struct EshObject *)arg0 at:(NSUInteger)arg1 ;
-(id)shapeContainer;
-(struct EshObject *)addAtomChildOfType:(unsigned short)arg0 ;
-(struct EshObject *)addPptAtomChildOfType:(unsigned short)arg0 ;
-(void)addCStringWithChar2String:(*unsigned short)arg0 instance:(int)arg1 ;
-(void)addCStringWithNSString:(id)arg0 instance:(int)arg1 ;
-(void)addChild:(id)arg0 ;
-(void)insertChild:(id)arg0 at:(NSUInteger)arg1 ;
-(void)removeChild:(id)arg0 ;
-(void)writeToWriter:(struct OcWriter *)arg0 ;


@end


#endif