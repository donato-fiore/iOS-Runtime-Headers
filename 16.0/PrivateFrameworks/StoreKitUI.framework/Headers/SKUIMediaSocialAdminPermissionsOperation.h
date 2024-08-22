// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMEDIASOCIALADMINPERMISSIONSOPERATION_H
#define SKUIMEDIASOCIALADMINPERMISSIONSOPERATION_H

@class SSVComplexOperation;


#import "SKUIClientContext.h"

@interface SKUIMediaSocialAdminPermissionsOperation : SSVComplexOperation {
    SKUIClientContext *_clientContext;
    id *_outputBlock;
}


@property (copy) id *outputBlock;


-(id)_authorsWithResponseDictionary:(id)arg0 ;
-(id)_lookupResponseForMissingAuthors:(id)arg0 error:(*id)arg1 ;
-(id)initWithClientContext:(id)arg0 ;
-(void)main;


@end


#endif