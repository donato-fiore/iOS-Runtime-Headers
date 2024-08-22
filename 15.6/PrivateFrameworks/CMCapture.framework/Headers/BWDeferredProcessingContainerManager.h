// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEFERREDPROCESSINGCONTAINERMANAGER_H
#define BWDEFERREDPROCESSINGCONTAINERMANAGER_H



#import "BWDeferredContainerManagerBase.h"

@interface BWDeferredProcessingContainerManager : BWDeferredContainerManagerBase {
    *OpaqueFigCaptureDeferredContainerManager _xpcContainerManager;
}




+(id)sharedInstance;
-(id)createProcessingContainerWithApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 err:(*int)arg2 ;
-(id)init;
-(id)manifestsForApplicationID:(id)arg0 err:(*int)arg1 ;
-(int)deleteContainerForApplicationID:(id)arg0 captureRequestIdentifier:(id)arg1 ;
-(int)waitForShaderCompilation;
-(void)releaseProcessingContainer:(id)arg0 ;


@end


#endif