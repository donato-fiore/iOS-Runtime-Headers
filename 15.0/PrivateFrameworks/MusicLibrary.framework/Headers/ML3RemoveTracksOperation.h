// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3REMOVETRACKSOPERATION_H
#define ML3REMOVETRACKSOPERATION_H



#import "ML3DatabaseOperation.h"

@interface ML3RemoveTracksOperation : ML3DatabaseOperation



-(BOOL)_execute:(*id)arg0 ;
-(BOOL)_removeSource:(int)arg0 usingTransaction:(id)arg1 ;
-(BOOL)_removeTracksWithPersistentIDs:(id)arg0 fromSource:(int)arg1 usingTransaction:(id)arg2 ;
-(BOOL)_verifyLibraryConnectionAndAttributesProperties:(*id)arg0 ;
-(NSUInteger)type;


@end


#endif