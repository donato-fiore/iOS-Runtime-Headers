// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSVMUTABLEBIDIRECTIONALDICTIONARY_H
#define MSVMUTABLEBIDIRECTIONALDICTIONARY_H



#import "MSVBidirectionalDictionary.h"

@interface MSVMutableBidirectionalDictionary : MSVBidirectionalDictionary



+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeKeyForObject:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setKey:(id)arg0 forObject:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif