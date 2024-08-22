// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMUTABLEORDEREDDICTIONARY_H
#define CNMUTABLEORDEREDDICTIONARY_H



#import "CNOrderedDictionary.h"

@interface CNMutableOrderedDictionary : CNOrderedDictionary



-(id)initWithDictionary:(id)arg0 orderedKeys:(id)arg1 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif