// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMEDIASOCIALLOADPROFILEPHOTOOPERATION_H
#define SKUIMEDIASOCIALLOADPROFILEPHOTOOPERATION_H

@class SSVComplexOperation, NSLock;


#import "SKUIClientContext.h"
#import "SKUIMediaSocialProfile.h"

@interface SKUIMediaSocialLoadProfilePhotoOperation : SSVComplexOperation {
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id *_outputBlock;
    SKUIMediaSocialProfile *_profile;
}


@property (copy) id *outputBlock;


-(id)_silhouette;
-(id)initWithClientContext:(id)arg0 ;
-(void)_fetchMonogram;
-(void)_fetchPhoto;
-(void)_fetchProfile;
-(void)_returnPhoto:(id)arg0 isFinal:(BOOL)arg1 ;
-(void)main;


@end


#endif