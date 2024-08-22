// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ML3MULTIUSERMUSICLIBRARYRESOURCESMANAGER_H
#define _ML3MULTIUSERMUSICLIBRARYRESOURCESMANAGER_H

@class ML3BaseMusicLibraryResourcesManager, NSString;
@protocol MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceProtocol, OS_dispatch_queue;



@interface _ML3MultiUserMusicLibraryResourcesManager : ML3BaseMusicLibraryResourcesManager <MLMediaLibraryAccountChangeObserver>



@property (copy, nonatomic) NSString *cachedLibraryContainerPath; // ivar: _cachedLibraryContainerPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MLMediaLibraryResourcesServiceProtocol> *libraryResourcesServices; // ivar: _libraryResourcesServices
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(id)initWithLibraryResourcesService:(id)arg0 ;
-(id)libraryContainerPath;
-(void)emergencyDisconnectWithCompletion:(id)arg0 ;
-(void)performDatabasePathChange:(id)arg0 completion:(id)arg1 ;
-(void)terminateForFailureToPerformDatabasePathChange;


@end


#endif