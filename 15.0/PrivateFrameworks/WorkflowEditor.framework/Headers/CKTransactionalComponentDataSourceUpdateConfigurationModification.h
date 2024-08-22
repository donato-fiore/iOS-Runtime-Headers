// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCEUPDATECONFIGURATIONMODIFICATION_H
#define CKTRANSACTIONALCOMPONENTDATASOURCEUPDATECONFIGURATIONMODIFICATION_H

@class NSDictionary, NSString;
@protocol CKTransactionalComponentDataSourceStateModifying;

#import <Foundation/Foundation.h>

#import "CKTransactionalComponentDataSourceConfiguration.h"

@interface CKTransactionalComponentDataSourceUpdateConfigurationModification : NSObject <CKTransactionalComponentDataSourceStateModifying>

 {
    CKTransactionalComponentDataSourceConfiguration *_configuration;
    NSDictionary *_userInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)changeFromState:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 userInfo:(id)arg1 ;


@end


#endif