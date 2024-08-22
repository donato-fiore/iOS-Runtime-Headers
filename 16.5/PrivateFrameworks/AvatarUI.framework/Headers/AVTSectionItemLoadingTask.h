// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSECTIONITEMLOADINGTASK_H
#define AVTSECTIONITEMLOADINGTASK_H

@class NSString;
@protocol AVTPreloadingTask, AVTAvatarAttributeEditorSectionItemPrefetching;

#import <Foundation/Foundation.h>


@interface AVTSectionItemLoadingTask : NSObject <AVTPreloadingTask>



@property (getter=isCanceled) BOOL canceled; // ivar: canceled
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSObject<AVTAvatarAttributeEditorSectionItemPrefetching> *sectionItem; // ivar: _sectionItem
@property (readonly) Class superclass;


-(id)initWithSectionItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancel;


@end


#endif