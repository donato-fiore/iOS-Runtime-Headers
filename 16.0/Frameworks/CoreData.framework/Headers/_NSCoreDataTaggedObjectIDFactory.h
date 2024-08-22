// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSCOREDATATAGGEDOBJECTIDFACTORY_H
#define _NSCOREDATATAGGEDOBJECTIDFACTORY_H


#import <Foundation/Foundation.h>


@interface _NSCoreDataTaggedObjectIDFactory : NSObject {
    int _cd_rc;
    unsigned int _taggedPoolIndex;
    id *_fallbackFactories;
}




+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(NSUInteger)retainCount;
-(id)_fallbackFactory;
-(id)_storeInfo1;
-(id)alloc;
-(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPK64:(NSInteger)arg0 ;
-(id)managedObjectIDFromURIRepresentation:(id)arg0 ;
-(id)managedObjectIDFromUTF8String:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)retain;
-(unsigned int)allocateBatch:(*id)arg0 count:(unsigned int)arg1 ;
-(void)_setStoreInfo1:(id)arg0 ;
-(void)_storeDeallocated;
-(void)dealloc;
-(void)release;
-(void)setObjectStoreIdentifier:(id)arg0 ;


@end


#endif