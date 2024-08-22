// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTGROUPVALUETUPLE_H
#define TSTGROUPVALUETUPLE_H

@class TSKSosBase, NSArray, NSString;
@protocol NSCopying;



@interface TSTGroupValueTuple : TSKSosBase <NSCopying>

 {
    NSArray *_groupValues;
    TSKUIDStruct _groupValueUid;
    NSString *_combinedCanonicalKeysString;
}


@property (readonly, nonatomic) NSString *combinedCanonicalKeysString;
@property (readonly, nonatomic) unsigned char numberOfLevels;


+(struct TSKUIDStruct )groupValueUidForTuple:(id)arg0 appendingTuple:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)canonicalKeyStringAtLevel:(unsigned char)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)groupValueAtLevel:(unsigned char)arg0 ;
-(id)groupValueTupleByAppendingTuple:(id)arg0 ;
-(id)groupValueTupleByAppendingValue:(id)arg0 ;
-(id)groupValueTupleByDemotingValueAtLevel:(unsigned char)arg0 toLevel:(unsigned char)arg1 ;
-(id)groupValueTupleByMergingTuple:(id)arg0 toLevel:(unsigned char)arg1 ;
-(id)groupValueTupleByPromotingValueAtLevel:(unsigned char)arg0 toLevel:(unsigned char)arg1 ;
-(id)groupValueTupleByRemovingValueAtLevel:(unsigned char)arg0 ;
-(id)groupValueTupleByReplacingValue:(id)arg0 atLevel:(unsigned char)arg1 ;
-(id)initWithTSCEValues:(*void)arg0 locale:(id)arg1 ;
-(id)initWithValueArray:(id)arg0 ;
-(id)initWithValues:(id)arg0 ;
-(id)locale;
-(id)prefixTupleToLevel:(unsigned char)arg0 ;
-(struct TSKUIDStruct )groupValueUid;
-(void)updateWithDocumentRoot:(id)arg0 ;


@end


#endif