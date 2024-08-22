// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSFILETRANSFER_H
#define HDSFILETRANSFER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDSFileTransfer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


+(id)destDirectoryForTargetId:(id)arg0 ;
+(id)tmpRapportDir;
-(id)init;
-(void)_invalidate;
-(void)invalidate:(id)arg0 ;
-(void)sideloadFilesForTargetId:(id)arg0 pathToDirectory:(id)arg1 withCompletion:(id)arg2 ;
-(void)waitForFilesWithTargetId:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif