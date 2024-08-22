// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC17PREVIEWSOSSUPPORT26UVSERVICEHUBPREVIEWSERVICE_H
#define _TTC17PREVIEWSOSSUPPORT26UVSERVICEHUBPREVIEWSERVICE_H

@protocol UVServiceHubService;

#import <Foundation/Foundation.h>


@interface _TtC17PreviewsOSSupport26UVServiceHubPreviewService : NSObject <UVServiceHubService>

 {
    ? invalidationHandle;
    ? shellConnection;
}




+(id)createAndReturnError:(*id)arg0 ;
-(id)init;
-(void)activateWithCompletion:(id)arg0 ;
-(void)cancel;
-(void)observeCancelation:(id)arg0 ;


@end


#endif