// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMAINQUEUEPHOTOLIBRARY_H
#define PLMAINQUEUEPHOTOLIBRARY_H



#import "PLPhotoLibrary.h"

@interface PLMainQueuePhotoLibrary : PLPhotoLibrary {
    int _splChangedToken;
}




+(id)systemMainQueuePhotoLibrary;
+(void)_resetSharedInstance;
-(id)initWithName:(char *)arg0 libraryBundle:(id)arg1 options:(id)arg2 ;
-(void)dealloc;


@end


#endif