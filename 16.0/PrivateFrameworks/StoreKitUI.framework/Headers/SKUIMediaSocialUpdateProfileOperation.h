// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMEDIASOCIALUPDATEPROFILEOPERATION_H
#define SKUIMEDIASOCIALUPDATEPROFILEOPERATION_H

@class SSVComplexOperation, NSString, NSNumber, NSLock, NSMutableDictionary;


#import "SKUIClientContext.h"

@interface SKUIMediaSocialUpdateProfileOperation : SSVComplexOperation {
    SKUIClientContext *_clientContext;
    NSString *_entityType;
    NSNumber *_identifier;
    NSLock *_lock;
    NSMutableDictionary *_parameters;
    id *_outputBlock;
}


@property (copy) NSString *entityType;
@property (copy) NSNumber *identifier;
@property (copy) id *outputBlock;


-(id)_imageDictionaryFromPhotoUpload:(id)arg0 ;
-(id)_requestBodyWithError:(*id)arg0 ;
-(id)_requestWithError:(*id)arg0 ;
-(id)initWithClientContext:(id)arg0 ;
-(void)main;
-(void)setValue:(id)arg0 forProfileField:(id)arg1 ;


@end


#endif