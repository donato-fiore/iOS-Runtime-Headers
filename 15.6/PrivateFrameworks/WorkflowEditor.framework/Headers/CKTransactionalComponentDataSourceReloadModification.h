// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSACTIONALCOMPONENTDATASOURCERELOADMODIFICATION_H
#define CKTRANSACTIONALCOMPONENTDATASOURCERELOADMODIFICATION_H

@class NSDictionary, NSString;
@protocol CKTransactionalComponentDataSourceStateModifying;

#import <Foundation/Foundation.h>


@interface CKTransactionalComponentDataSourceReloadModification : NSObject <CKTransactionalComponentDataSourceStateModifying>

 {
    NSDictionary *_userInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)changeFromState:(id)arg0 ;
-(id)initWithUserInfo:(id)arg0 ;


@end


#endif