// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSTUBBEDSTOREBACKEND_H
#define AVTSTUBBEDSTOREBACKEND_H

@class NSString;
@protocol AVTStoreBackend, AVTStoreBackendDelegate, AVTAvatarRecordChangeTracker;

#import <Foundation/Foundation.h>


@interface AVTStubbedStoreBackend : NSObject <AVTStoreBackend>



@property (weak, nonatomic) NSObject<AVTStoreBackendDelegate> *backendDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTAvatarRecordChangeTracker> *recordChangeTracker;
@property (readonly) Class superclass;


-(BOOL)canCreateAvatarWithError:(*id)arg0 ;
-(BOOL)deleteAvatarWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveAvatar:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveAvatars:(id)arg0 error:(*id)arg1 ;
-(id)avatarsForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)duplicateAvatarRecord:(id)arg0 error:(*id)arg1 ;


@end


#endif