// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDDEMOSERVICE_H
#define PLASSETSDDEMOSERVICE_H

@class NSString;
@protocol PLAssetsdDemoServiceProtocol;

#import <Foundation/Foundation.h>

#import "PLAssetsdConnectionAuthorization.h"

@interface PLAssetsdDemoService : NSObject <PLAssetsdDemoServiceProtocol>

 {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnectionAuthorization:(id)arg0 ;
-(void)cleanupForStoreDemoMode;
-(void)hasCompletedMomentAnalysisWithReply:(id)arg0 ;
-(void)hasCompletedRestorePostProcessingWithReply:(id)arg0 ;


@end


#endif