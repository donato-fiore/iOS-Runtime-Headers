// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDSTATICSYNCSESSION_H
#define _HDSTATICSYNCSESSION_H



#import "HDSyncSession.h"

@interface _HDStaticSyncSession : HDSyncSession



-(NSInteger)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg0 ;
-(NSInteger)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg0 ;
-(id)newChangeWithSyncEntityClass:(Class)arg0 version:(struct ? )arg1 ;


@end


#endif