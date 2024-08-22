// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSTEMPORARYOBJECTID2_H
#define _NSTEMPORARYOBJECTID2_H



#import "NSTemporaryObjectID.h"
#import "_NS128bitWrapper.h"

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {
    id *_store;
    _NS128bitWrapper *_uuid128;
}




+(id)initWithEntity:(id)arg0 andUUIDString:(id)arg1 ;
-(BOOL)_isPersistentStoreAlive;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_referenceData;
-(id)_storeIdentifier;
-(id)persistentStore;
-(void)_setPersistentStore:(id)arg0 ;
-(void)dealloc;


@end


#endif