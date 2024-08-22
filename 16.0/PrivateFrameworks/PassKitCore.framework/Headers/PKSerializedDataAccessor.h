// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSERIALIZEDDATAACCESSOR_H
#define PKSERIALIZEDDATAACCESSOR_H

@class NSData;


#import "PKFileDataAccessor.h"

@interface PKSerializedDataAccessor : PKFileDataAccessor {
    os_unfair_lock_s _lock;
    NSData *_archiveData;
}




-(id)_initWithFileURL:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(id)archiveData;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 outputURL:(id)arg2 ;
-(id)initWithFileDescriptor:(int)arg0 error:(*id)arg1 ;
-(id)initWithFileDescriptor:(int)arg0 error:(*id)arg1 outputURL:(id)arg2 ;
-(id)initWithFileURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithFileURL:(id)arg0 error:(*id)arg1 coordinator:(id)arg2 ;
-(void)_downloadRemoteAssetsWithConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif