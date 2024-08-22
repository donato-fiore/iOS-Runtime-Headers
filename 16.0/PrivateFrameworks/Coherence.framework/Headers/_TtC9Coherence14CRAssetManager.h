// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9COHERENCE14CRASSETMANAGER_H
#define _TTC9COHERENCE14CRASSETMANAGER_H

@class SwiftObject;



@interface _TtC9Coherence14CRAssetManager : SwiftObject {
    ? filePresenters;
    ? assetActor;
    ? filePresentersQueue;
    ? addAssetTasks;
    ? filePresenterURLsOnBackground;
    ? encryptionDelegate;
    ? isInBackground;
}




-(void)didEnterBackground;
-(void)willEnterForeground;


@end


#endif