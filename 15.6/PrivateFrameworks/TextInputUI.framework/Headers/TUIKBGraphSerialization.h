// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUIKBGRAPHSERIALIZATION_H
#define TUIKBGRAPHSERIALIZATION_H

@class NSMapTable, NSDictionary, NSData, NSMutableDictionary, NSMutableData;

#import <Foundation/Foundation.h>


@interface TUIKBGraphSerialization : NSObject {
    NSMapTable *_serializedOffsets;
    NSDictionary *_keyboardOffsets;
    NSData *_keyboardOffsetsData;
    NSData *_graphData;
    NSData *_serializedData;
    NSMutableDictionary *_minEdgeWidths;
    NSMutableDictionary *_maxEdgeWidths;
    NSMutableDictionary *_referenceCount;
    BOOL _disableOffsets;
}


@property (retain, nonatomic) NSMutableDictionary *deserializationCache; // ivar: _deserializationCache
@property (readonly, nonatomic) NSMutableData *graphData;
@property (readonly, nonatomic) NSMutableDictionary *keyboardOffsets;
@property (retain, nonatomic) NSData *serializedData;


+(id)separatorCharacterSet;
-(BOOL)stringIsSimple:(id)arg0 ;
-(NSUInteger)compressedIntForOffset:(*int)arg0 ;
-(NSUInteger)compressedUIntForOffset:(*int)arg0 ;
-(NSUInteger)serializedObjectCount;
-(float)bareFloatForOffset:(*int)arg0 ;
-(float)compressedFloatForOffset:(*int)arg0 withKind:(unsigned char)arg1 ;
-(float)floatValueForOffset:(*int)arg0 ;
-(id)UIKBTreeForOffset:(*int)arg0 withFlags:(NSUInteger)arg1 ;
-(id)_UIKBTreeForOffset:(*int)arg0 withFlags:(NSUInteger)arg1 ;
-(id)_objectAtSerializedOffset:(int)arg0 ;
-(id)arrayForOffset:(*int)arg0 withCount:(NSUInteger)arg1 ;
-(id)dataForArray:(id)arg0 ;
-(id)dataForBareFloat:(float)arg0 ;
-(id)dataForCGRect:(struct CGRect )arg0 ;
-(id)dataForCompressedFloat:(float)arg0 kind:(*unsigned char)arg1 ;
-(id)dataForCompressedInt:(NSInteger)arg0 ;
-(id)dataForCompressedUInt:(NSUInteger)arg0 ;
-(id)dataForDictionary:(id)arg0 ;
-(id)dataForFlags:(unsigned char)arg0 ;
-(id)dataForFloat:(float)arg0 ;
-(id)dataForGeometry:(id)arg0 ;
-(id)dataForInt:(int)arg0 ;
-(id)dataForMergeAction:(id)arg0 ;
-(id)dataForObject:(id)arg0 ;
-(id)dataForOffsetObject:(id)arg0 ;
-(id)dataForReference:(int)arg0 ;
-(id)dataForSet:(id)arg0 ;
-(id)dataForShape:(id)arg0 ;
-(id)dataForSimpleString:(id)arg0 ;
-(id)dataForString:(id)arg0 ;
-(id)dataForStringConcat:(id)arg0 ;
-(id)dataForUIKBTree:(id)arg0 ;
-(id)dataForUIKBValue:(struct ? )arg0 ;
-(id)dictionaryForOffset:(*int)arg0 nonEmpty:(BOOL)arg1 ;
-(id)geometryForOffset:(*int)arg0 withFlags:(NSUInteger)arg1 ;
-(id)init;
-(id)keyboardForName:(id)arg0 ;
-(id)keyboardPrefixForWidth:(float)arg0 andEdge:(BOOL)arg1 ;
-(id)mergeActionForOffset:(*int)arg0 withFlags:(NSUInteger)arg1 ;
-(id)mutableDataForObjectType:(unsigned char)arg0 ;
-(id)mutableDataForObjectType:(unsigned char)arg0 withFlags:(NSUInteger)arg1 ;
-(id)mutableDataForObjectType:(unsigned char)arg0 withSize:(NSUInteger)arg1 ;
-(id)objectForOffset:(*int)arg0 ;
-(id)refArrayForOffset:(*int)arg0 withCount:(NSUInteger)arg1 ;
-(id)relativeRefArrayForOffset:(*int)arg0 withCount:(NSUInteger)arg1 ;
-(id)sanitizedDictionary:(id)arg0 ;
-(id)setForOffset:(*int)arg0 nonEmpty:(BOOL)arg1 ;
-(id)shapeForOffset:(*int)arg0 withFlags:(NSUInteger)arg1 ;
-(id)simpleStringForOffset:(*int)arg0 withUTF8Length:(NSUInteger)arg1 ;
-(id)statistics;
-(id)stringConcatForOffset:(*int)arg0 withComponentCount:(NSUInteger)arg1 ;
-(id)stringsBySplittingString:(id)arg0 afterCharactersInSet:(id)arg1 ;
-(int)_serializedOffsetForObject:(id)arg0 ;
-(int)intValueForOffset:(*int)arg0 ;
-(struct ? )UIKBValueForOffset:(*int)arg0 ;
-(struct CGRect )CGRectForOffset:(*int)arg0 ;
-(unsigned char)flagsForOffset:(*int)arg0 ;
-(void)addKeyboardPrefix:(id)arg0 forWidth:(float)arg1 minEdge:(BOOL)arg2 ;
-(void)dealloc;
-(void)persistData:(id)arg0 forObject:(id)arg1 ;
-(void)preheatWithStatistics:(id)arg0 ;
-(void)reset;
-(void)serializeObject:(id)arg0 ;


@end


#endif