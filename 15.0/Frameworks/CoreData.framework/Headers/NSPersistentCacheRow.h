// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPERSISTENTCACHEROW_H
#define NSPERSISTENTCACHEROW_H


#import <Foundation/Foundation.h>


@interface NSPersistentCacheRow : NSObject {
    int _cd_rc;
    int _externalReferenceCount;
    _externalRefFlags_st _externalRefFlags;
    *id _toManyMap;
    CGFloat _birth;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(*id)knownKeyValuesPointer;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(NSUInteger)version;
-(id)initWithOptions:(unsigned int)arg0 andTimestamp:(CGFloat)arg1 ;
-(id)objectID;
-(id)retain;
-(void)dealloc;
-(void)release;


@end


#endif