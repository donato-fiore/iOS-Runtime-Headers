// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OCMAPPER_H
#define OCMAPPER_H


#import <Foundation/Foundation.h>

#import "OCCancel.h"
#import "OITSUTemporaryDirectory.h"

@interface OCMapper : NSObject {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}




+(id)mapperForCurrentThread;
-(BOOL)isCancelled;
-(id)init;
-(id)temporaryDirectoryPath;
-(void)cancel;
-(void)quit;
-(void)setup;
-(void)teardown;


@end


#endif