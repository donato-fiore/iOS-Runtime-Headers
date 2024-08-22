// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYCOMPANIONTIMELINEREQUEST_H
#define PXSTORYCOMPANIONTIMELINEREQUEST_H


#import <Foundation/Foundation.h>


@interface PXStoryCompanionTimelineRequest : NSObject



+(BOOL)_transformConfiguration:(id)arg0 intoStoryConfiguration:(*id)arg1 extendedTraitCollection:(*id)arg2 error:(*id)arg3 ;
+(id)_createCompanionTimelineFromModel:(id)arg0 ;
+(id)requestTimelineWithConfiguration:(id)arg0 resultHandler:(id)arg1 ;
+(void)_waitForFinalTimelineWithProgress:(id)arg0 model:(id)arg1 resultHandler:(id)arg2 ;
-(id)init;


@end


#endif