// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC17PREVIEWSOSSUPPORT23UVSERVICEHUBPIPESERVICE_H
#define _TTC17PREVIEWSOSSUPPORT23UVSERVICEHUBPIPESERVICE_H

@protocol UVServiceHubService;

#import <Foundation/Foundation.h>


@interface _TtC17PreviewsOSSupport23UVServiceHubPipeService : NSObject <UVServiceHubService>

 {
    ? invalidationHandle;
    ? serviceHubTransport;
    ? messagePipe;
}




+(id)createAndReturnError:(*id)arg0 with:(id)arg1 ;
-(id)init;
-(void)activateWithCompletion:(id)arg0 ;
-(void)cancel;
-(void)observeCancelation:(id)arg0 ;


@end


#endif