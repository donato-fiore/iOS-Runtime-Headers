// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEODEFAULTSDBARRAY_H
#define GEODEFAULTSDBARRAY_H



#import "GEODefaultsDBCollection.h"

@interface GEODefaultsDBArray : GEODefaultsDBCollection



+(id)dbValue:(id)arg0 ;
-(NSUInteger)count;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif