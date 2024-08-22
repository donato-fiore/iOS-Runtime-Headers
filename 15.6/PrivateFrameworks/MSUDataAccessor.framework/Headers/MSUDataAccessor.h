// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSUDATAACCESSOR_H
#define MSUDATAACCESSOR_H


#import <Foundation/Foundation.h>


@interface MSUDataAccessor : NSObject



+(id)bootUUIDWithError:(*id)arg0 ;
+(id)errorNameForCode:(NSInteger)arg0 ;
+(id)ioreg:(id)arg0 property:(id)arg1 error:(*id)arg2 ;
+(id)sharedDataAccessor;
+(void)buildErrorForRef:(*id)arg0 code:(NSInteger)arg1 description:(id)arg2 ;
-(id)copyBootManifestHashWithError:(*id)arg0 ;
-(id)copyMountPointForVolumeType:(int)arg0 error:(*id)arg1 ;
-(id)copyPathForPersistentData:(int)arg0 error:(*id)arg1 ;
-(id)copyPathForPersonalizedData:(int)arg0 error:(*id)arg1 ;
-(id)hardwareRootWithError:(*id)arg0 ;
-(id)init;
-(id)personalizedRootWithError:(*id)arg0 ;
-(id)resolveFilePathForEntry:(struct path_table_entry *)arg0 error:(*id)arg1 ;


@end


#endif