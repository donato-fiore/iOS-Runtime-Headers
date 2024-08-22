// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMLIBRARYREPAIR_H
#define MCMLIBRARYREPAIR_H


#import <Foundation/Foundation.h>

#import "MCMManagedPathRegistry.h"

@interface MCMLibraryRepair : NSObject

@property (nonatomic) BOOL pathsCreated; // ivar: _pathsCreated
@property (readonly, nonatomic) MCMManagedPathRegistry *registry; // ivar: _registry


-(?)_fixOwnershipOnFD:(?)arg0 FTSENT:(?)arg1 stat:(?)arg2 statfs:(?)arg3 uid:(?)arg4 giderror;
-(BOOL)_canRepairLocally;
-(BOOL)_fixACLOnFD:(int)arg0 removeACLFilesec:(struct _filesec *)arg1 denyDeleteFilesec:(struct _filesec *)arg2 denyDeleteText:(char *)arg3 path:(char *)arg4 error:(*id)arg5 ;
-(BOOL)_fixFlagsOnFD:(int)arg0 FTSENT:(struct _ftsent *)arg1 stat:(struct stat *)arg2 error:(*id)arg3 ;
-(BOOL)_fixPOSIXBitsOnFD:(int)arg0 FTSENT:(struct _ftsent *)arg1 stat:(struct stat *)arg2 error:(*id)arg3 ;
-(BOOL)_fixPOSIXPermsOnFD:(int)arg0 FTSENT:(struct _ftsent *)arg1 stat:(struct stat *)arg2 error:(*id)arg3 ;
-(BOOL)_withEveryoneDenyDeleteACLDoBlock:(id)arg0 ;
-(BOOL)createPathsIfNecessaryWithError:(*id)arg0 ;
-(BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)arg0 error:(*id)arg1 duringBlock:(id)arg2 ;
-(BOOL)fixPermissionsWithManagedPath:(id)arg0 uid:(unsigned int)arg1 gid:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)managedPathsHaveChanged;
-(BOOL)performGenericRepairWithError:(*id)arg0 ;
-(id)_managedPathsForGenericRepair;
-(id)initWithManagedPathRegistry:(id)arg0 ;
-(struct _filesec *)_denyDeleteACLFilesecWithACLText:(*char *)arg0 ;
-(struct _filesec *)_removeACLFilesec;


@end


#endif