// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDVOLUMEMANAGER_H
#define FPDVOLUMEMANAGER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "FPDServer.h"

@interface FPDVolumeManager : NSObject {
    NSMutableArray *_volumes;
    NSMutableDictionary *_volumeForProviderDomainID;
}


@property (nonatomic) BOOL excludeDiskImages; // ivar: _excludeDiskImages
@property (weak, nonatomic) FPDServer *server; // ivar: _server


-(BOOL)loadEnterpriseVolumeWithError:(*id)arg0 ;
-(BOOL)loadHomeVolume;
-(BOOL)loadVolumeWithURL:(id)arg0 role:(unsigned int)arg1 error:(*id)arg2 ;
-(id)appSupportPathForProviderDomainID:(id)arg0 ;
-(id)cloudStoragePathForProviderDomainID:(id)arg0 ;
-(id)init;
-(id)initWithServer:(id)arg0 ;
-(id)libraryForProviderDomainID:(id)arg0 ;
-(id)libraryForVolume:(id)arg0 createIfNeeded:(BOOL)arg1 error:(*id)arg2 ;
-(id)loadSingleVolume:(struct statfs *)arg0 role:(unsigned int)arg1 ;
-(struct statfs *)getAllEligibleVolumesWithError:(*id)arg0 count:(*int)arg1 ;
-(void)cacheLibrary:(id)arg0 forProviderDomainID:(id)arg1 ;
-(void)enumerateLibrariesForPersona:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateLibrariesWithBlock:(id)arg0 ;
-(void)invalidateVolume:(int)arg0 reason:(id)arg1 ;
-(void)loadAdditionalVolumesWithCompletion:(id)arg0 ;


@end


#endif