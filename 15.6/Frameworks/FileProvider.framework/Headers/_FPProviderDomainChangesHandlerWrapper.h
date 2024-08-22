// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FPPROVIDERDOMAINCHANGESHANDLERWRAPPER_H
#define _FPPROVIDERDOMAINCHANGESHANDLERWRAPPER_H


#import <Foundation/Foundation.h>


@interface _FPProviderDomainChangesHandlerWrapper : NSObject {
    id *_handler;
}


@property (getter=isUnregistered) BOOL unregistered;


+(id)wrapperWithHandler:(id)arg0 ;
-(void)callHandlerWithProvidersByID:(id)arg0 error:(id)arg1 ;


@end


#endif