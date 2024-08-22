// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDVOLUME_H
#define FPDVOLUME_H

@class NSURL, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "FPDVolumeManager.h"

@interface FPDVolume : NSObject

@property (readonly, nonatomic) int dev; // ivar: _dev
@property (readonly, nonatomic) BOOL isDefaultVolumeForCurrentPersona;
@property (readonly, nonatomic) BOOL isLibraryConfigured; // ivar: _isLibraryConfigured
@property (readonly, nonatomic) NSURL *purgatoryDirectory;
@property (readonly, nonatomic) unsigned int role; // ivar: _role
@property (readonly, nonatomic) NSString *root; // ivar: _root
@property (readonly, nonatomic) NSURL *syncRootsDirectory;
@property (readonly, nonatomic) NSURL *systemDirectory;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, weak, nonatomic) FPDVolumeManager *volumeManager; // ivar: _volumeManager


-(BOOL)_hasCloudStorageDirAtRoot;
-(BOOL)isEligibleForFPFS:(struct statfs *)arg0 ;
-(BOOL)satisfyNonDefaultVolumeCriteria:(struct statfs *)arg0 volumeManager:(id)arg1 ;
-(id)description;
-(id)initWithVolumeInfo:(struct statfs *)arg0 knownRole:(unsigned int)arg1 volumeManager:(id)arg2 ;
-(unsigned int)resolveRoleForVolume:(struct statfs *)arg0 ;
-(void)enumerateDomainsWithBlock:(id)arg0 ;


@end


#endif