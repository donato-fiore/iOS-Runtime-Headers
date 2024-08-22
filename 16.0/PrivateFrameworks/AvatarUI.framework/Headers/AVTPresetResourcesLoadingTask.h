// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTPRESETRESOURCESLOADINGTASK_H
#define AVTPRESETRESOURCESLOADINGTASK_H

@class NSString, NSArray;
@protocol AVTPreloadingTask;

#import <Foundation/Foundation.h>


@interface AVTPresetResourcesLoadingTask : NSObject <AVTPreloadingTask>



@property (getter=isCanceled) BOOL canceled; // ivar: canceled
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *presetResources; // ivar: _presetResources
@property (readonly) Class superclass;


-(id)initWithPresetResources:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancel;


@end


#endif