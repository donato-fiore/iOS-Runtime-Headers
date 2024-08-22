// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3MUSICLIBRARYRESOURCESMANAGERCONTEXT_H
#define ML3MUSICLIBRARYRESOURCESMANAGERCONTEXT_H

@class NSString;
@protocol MLMediaLibraryAccountChangeObserver, _MSVAccountInformationProviding, MLMediaLibraryResourcesServiceProtocol;

#import <Foundation/Foundation.h>


@interface ML3MusicLibraryResourcesManagerContext : NSObject

@property (readonly, nonatomic) NSObject<MLMediaLibraryAccountChangeObserver> *accountChangeObserver; // ivar: _accountChangeObserver
@property (readonly, nonatomic) NSObject<_MSVAccountInformationProviding> *accountInfo; // ivar: _accountInfo
@property (readonly, nonatomic) NSString *libraryContainerIdentifier; // ivar: _libraryContainerIdentifier
@property (readonly, nonatomic, getter=isMultiUserSupported) BOOL multiUserSupported; // ivar: _multiUserSupported
@property (readonly, nonatomic) NSObject<MLMediaLibraryResourcesServiceProtocol> *resourcesService; // ivar: _resourcesService
@property (readonly, nonatomic, getter=isRunningInDaemon) BOOL runningInDaemon; // ivar: _runningInDaemon


+(id)contextForAutoupdatingSharedLibrary;
+(id)contextForMultiUserDaemonLibraryWithAccountInfo:(id)arg0 accountChangeObserver:(id)arg1 ;
+(id)contextForMultiUserFrameworkLibraryWithService:(id)arg0 ;
+(id)contextForSingleUserLibraryWithAccountInfo:(id)arg0 ;
+(id)contextForSingleUserLibraryWithLibraryContainerIdentifier:(id)arg0 ;
-(id)_initWithResourcesService:(id)arg0 accountInfo:(id)arg1 libraryContainerIdentifier:(id)arg2 accountChangeObserver:(id)arg3 supportsMultiUsers:(BOOL)arg4 runningInDaemon:(BOOL)arg5 ;


@end


#endif