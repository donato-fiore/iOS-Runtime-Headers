// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMUTABLEMULTIDICTIONARY_H
#define CNMUTABLEMULTIDICTIONARY_H



#import "CNMultiDictionary.h"

@interface CNMutableMultiDictionary : CNMultiDictionary



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addNonNilObject:(id)arg0 forKey:(id)arg1 ;
-(void)addObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeObject:(id)arg0 forKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg0 ;
-(void)setObjects:(id)arg0 forKey:(id)arg1 ;


@end


#endif