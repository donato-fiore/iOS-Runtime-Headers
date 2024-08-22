// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNDISCOVERFILESERVERREQUEST_H
#define SNDISCOVERFILESERVERREQUEST_H

@class NSString;
@protocol SNTaskCreating, SNRequest;

#import <Foundation/Foundation.h>


@interface SNDiscoverFileServerRequest : NSObject <SNTaskCreating, SNRequest>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)launchTaskWithQueue:(SEL)arg0 completionHandler:(id)arg1 resultsHandler:(id)arg2 ;


@end


#endif