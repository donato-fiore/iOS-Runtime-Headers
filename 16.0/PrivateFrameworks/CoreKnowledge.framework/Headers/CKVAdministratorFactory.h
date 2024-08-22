// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVADMINISTRATORFACTORY_H
#define CKVADMINISTRATORFACTORY_H

@protocol CKVAdministratorProvider, CKVAdminServiceProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKVAdministratorFactory : NSObject <CKVAdministratorProvider>

 {
    NSObject<CKVAdminServiceProvider> *_serviceProvider;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedAdministratorFactory;
-(id)administrator;
-(id)init;
-(id)initWithServiceProvider:(id)arg0 ;


@end


#endif