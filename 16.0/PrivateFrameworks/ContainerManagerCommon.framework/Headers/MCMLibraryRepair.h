// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMLIBRARYREPAIR_H
#define MCMLIBRARYREPAIR_H


#import <Foundation/Foundation.h>

#import "MCMManagedPathRegistry.h"

@interface MCMLibraryRepair : NSObject

@property (nonatomic) BOOL pathsCreated; // ivar: _pathsCreated
@property (readonly, nonatomic) MCMManagedPathRegistry *registry; // ivar: _registry


-(?)_fixFlagsOnFD:(?)arg0 FTSENT:(?)arg1 staterror;
-(?)_fixPOSIXBitsOnFD:(?)arg0 FTSENT:(?)arg1 staterror;
-(?)_fixPOSIXPermsOnFD:(?)arg0 FTSENT:(?)arg1 staterror;
-(BOOL)_canRepairLocally;
-(BOOL)_fixACLOnFD:(int)arg0 removeACLFilesec:(struct _filesec *)arg1 denyDeleteFilesec:(struct _filesec *)arg2 denyDeleteText:(char *)arg3 path:(char *)arg4 error:(*id)arg5 ;
-(BOOL)_fixOwnershipOnFD:(int)arg0 FTSENT:(struct _ftsent *)arg1 stat:(struct stat *)arg2 statfs:(struct statfs *)arg3 uid:(unsigned int)arg4 gid:(unsigned int)arg5 error:(*id)arg6 ;
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