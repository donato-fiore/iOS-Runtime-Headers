// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSSCREENSHOTASSETMANAGER_H
#define SSSCREENSHOTASSETMANAGER_H

@protocol SSScreenshotAssetManagerBackend;

#import <Foundation/Foundation.h>


@interface SSScreenshotAssetManager : NSObject {
    id<SSScreenshotAssetManagerBackend> *_backend;
}




+(id)sharedAssetManager;
-(id)backend;
-(void)imageWithPreviouslyRegisteredIdentifier:(id)arg0 withAccessBlock:(id)arg1 ;
-(void)recordEditsToPersistable:(id)arg0 inTransition:(BOOL)arg1 withCompletionBlock:(id)arg2 ;
-(void)recordEditsToPersistableForPDF:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)recordPersistableToTemporaryLocation:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)registerImageForPersistable:(id)arg0 options:(id)arg1 withRegistrationBlock:(id)arg2 ;
-(void)removePersistable:(id)arg0 deleteOptions:(NSUInteger)arg1 withCompletionBlock:(id)arg2 ;
-(void)resetBackend;
-(void)setBackend:(id)arg0 ;


@end


#endif