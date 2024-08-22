// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSGINTERNALREQUESTHANDLER_H
#define PSGINTERNALREQUESTHANDLER_H

@class _PASBundleIdResolver, NSString;
@protocol PSGInternalServerProtocol;

#import <Foundation/Foundation.h>

#import "PSGExperimentResolver.h"

@interface PSGInternalRequestHandler : NSObject <PSGInternalServerProtocol>

 {
    id<PSGInternalServerProtocol> *_clientProxy;
    PSGExperimentResolver *_experimentResolver;
}


@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // ivar: _bundleIdResolver
@property (copy, nonatomic) NSString *clientProcessName; // ivar: _clientProcessName


-(id)_getPreferredLanguages;
-(id)_getWordBoundaryExperimentInfo:(id)arg0 ;
-(id)_getZKWExperimentInfo:(id)arg0 ;
-(id)_initWithExperimentResolver:(id)arg0 ;
-(id)init;
-(void)setRemoteObjectProxy:(id)arg0 ;
-(void)sysdiagnoseInformationWithCompletion:(id)arg0 ;


@end


#endif