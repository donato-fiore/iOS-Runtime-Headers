// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef XBAPPLICATIONCAPTUREINFORMATION_H
#define XBAPPLICATIONCAPTUREINFORMATION_H

@class NSArray, NSString, NSOrderedSet;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface XBApplicationCaptureInformation : NSObject <BSDescriptionProviding>

 {
    NSArray *_captureInfos;
    NSArray *_launchImagePaths;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOrderedSet *launchRequests; // ivar: _launchRequests
@property (readonly) Class superclass;


-(NSUInteger)estimatedMemoryImpactForLaunchRequest:(id)arg0 ;
-(id)caarPathForLaunchRequest:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithLaunchRequests:(id)arg0 captureInfos:(id)arg1 launchImagePaths:(id)arg2 ;
-(id)launchImagePathForLaunchRequest:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif