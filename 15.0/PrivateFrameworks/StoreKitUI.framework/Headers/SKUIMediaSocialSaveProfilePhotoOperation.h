// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIMEDIASOCIALSAVEPROFILEPHOTOOPERATION_H
#define SKUIMEDIASOCIALSAVEPROFILEPHOTOOPERATION_H

@class SSVComplexOperation, NSLock, UIImage;


#import "SKUIClientContext.h"

@interface SKUIMediaSocialSaveProfilePhotoOperation : SSVComplexOperation {
    SKUIClientContext *_clientContext;
    NSLock *_lock;
    id *_outputBlock;
    UIImage *_photo;
}




-(id)_photoUploadWithResponseDictionary:(id)arg0 ;
-(id)_requestWithError:(*id)arg0 ;
-(id)initWithClientContext:(id)arg0 ;
-(id)outputBlock:(SEL)arg0 ;
-(void)main;
-(void)setOutputBlock:(id)arg0 ;
-(void)setPhoto:(id)arg0 ;


@end


#endif