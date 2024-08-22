// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSKNOWNKEYSMAPPINGSTRATEGY1_H
#define NSKNOWNKEYSMAPPINGSTRATEGY1_H



#import "NSKnownKeysMappingStrategy.h"

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
    int _cd_rc;
    int _reserved64;
    *void _table;
    NSUInteger _length;
    id *_reserved1;
    *id _keys;
}




+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)supportsSecureCoding;
+(Class)classForKeyedUnarchiver;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;
-(*id)keys;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)fastIndexForKnownKey:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)indexForKey:(id)arg0 ;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(id)allKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initForKeys:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initForKeys:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)release;


@end


#endif