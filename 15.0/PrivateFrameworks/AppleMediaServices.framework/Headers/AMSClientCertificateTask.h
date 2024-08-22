// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSCLIENTCERTIFICATETASK_H
#define AMSCLIENTCERTIFICATETASK_H

@protocol OS_dispatch_queue;


#import "AMSTask.h"
#import "AMSKeychainOptions.h"

@interface AMSClientCertificateTask : AMSTask

@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain) AMSKeychainOptions *options; // ivar: _options


-(id)_baaOptionsWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(id)performClientCertChainRequest;


@end


#endif