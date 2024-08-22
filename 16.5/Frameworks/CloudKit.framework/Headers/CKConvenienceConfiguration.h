// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONVENIENCECONFIGURATION_H
#define CKCONVENIENCECONFIGURATION_H

@protocol CKConvenienceCallbackWrapper;

#import <Foundation/Foundation.h>

#import "CKOperationConfiguration.h"
#import "CKOperationGroup.h"

@interface CKConvenienceConfiguration : NSObject

@property (readonly, nonatomic) CKOperationConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSObject<CKConvenienceCallbackWrapper> *convenienceCallbacks; // ivar: _convenienceCallbacks
@property (readonly, nonatomic) CKOperationGroup *group; // ivar: _group


-(id)initWithConfiguration:(id)arg0 group:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 group:(id)arg1 convenienceCallbackWrapper:(id)arg2 ;


@end


#endif