// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3REMOVEPLAYLISTSOPERATION_H
#define ML3REMOVEPLAYLISTSOPERATION_H



#import "ML3DatabaseOperation.h"

@interface ML3RemovePlaylistsOperation : ML3DatabaseOperation



-(BOOL)_execute:(*id)arg0 ;
-(BOOL)_removePlaylistsWithPersistentIDs:(id)arg0 fromSource:(int)arg1 usingTransaction:(id)arg2 ;
-(BOOL)_removeRemotePlaylistsWithNoSourceUsingTransation:(id)arg0 ;
-(BOOL)_removeSource:(int)arg0 usingTransaction:(id)arg1 ;
-(BOOL)_verifyLibraryConnectionAndAttributesProperties:(*id)arg0 ;
-(NSUInteger)type;


@end


#endif