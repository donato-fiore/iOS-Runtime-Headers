// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRPERSISTING_H
#define SPRPERSISTING_H



#import "SPRObject.h"

@interface SPRPersisting : SPRObject



-(BOOL)deleteAll:(*id)arg0 ;
-(BOOL)deleteWithKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)insertWithKey:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateWithKey:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(id)retrieveAll:(*id)arg0 ;
-(id)retrieveWithKey:(id)arg0 error:(*id)arg1 ;


@end


#endif