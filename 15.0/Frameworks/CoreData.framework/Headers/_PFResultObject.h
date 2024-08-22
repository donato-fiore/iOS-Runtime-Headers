// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFRESULTOBJECT_H
#define _PFRESULTOBJECT_H

@class NSDictionary;


#import "_PFResultArray.h"

@interface _PFResultObject : NSDictionary {
    _PFResultArray *_parent_buffer;
    int _cd_rc;
    unsigned int _count;
    NSUInteger _sql_entity_id;
    NSUInteger _primary_key;
}




+(Class)classForKeyedUnarchiver;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)retainCount;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)retain;
-(id)valueAtIndex:(NSUInteger)arg0 ;
-(void)_setParentBuffer:(id)arg0 ;
-(void)dealloc;
-(void)release;


@end


#endif