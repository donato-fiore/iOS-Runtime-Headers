// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KGEDGECOLLECTION_H
#define KGEDGECOLLECTION_H



#import "KGElementCollection.h"

@interface KGEdgeCollection : KGElementCollection



-(id)allObjects;
-(void)enumerateDoublePropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateEdgesUsingBlock:(id)arg0 ;
-(void)enumerateElementsWithBatchSize:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateIntegerPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateStringPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;


@end


#endif