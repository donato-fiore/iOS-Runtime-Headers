// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEREMOTEDATAVALUEMAP_H
#define TSCEREMOTEDATAVALUEMAP_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCERemoteDataValueMap : NSObject <NSCopying>

 {
    unordered_map<unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableDictionary<TSCERemoteDataSpecifier *,TSCECellValue *> *>>> _coldDataByYear;
}


@property (readonly, nonatomic) NSInteger count;
@property (retain, nonatomic) NSMutableDictionary *data; // ivar: _data


+(id)valueMap;
+(id)valueMapWithSpecifier:(id)arg0 value:(id)arg1 ;
-(BOOL)containsValueForAllSpecifiersInSet:(id)arg0 ;
-(BOOL)containsValueForSpecifier:(id)arg0 ;
-(id)allSpecifiers;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)mapForSingleSpecifier:(id)arg0 ;
-(id)mapForSpecifiersInSet:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)updateWithValuesFromMap:(id)arg0 overwriteValues:(BOOL)arg1 ;
-(id)valueForSpecifier:(id)arg0 ;
-(void)addValuesFromMap:(id)arg0 ;
-(void)enumerateSpecifiersAndValuesWithBlock:(id)arg0 ;
-(void)p_enumerateYearMapsWithBlock:(id)arg0 ;
-(void)p_saveMap:(id)arg0 toArchive:(*void)arg1 ;
-(void)removeAllValues;
-(void)removeValueForSpecifier:(id)arg0 ;
-(void)removeValuesForSpecifierSet:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setValue:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif