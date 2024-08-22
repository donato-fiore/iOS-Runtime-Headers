// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCASSETHANDLEDOWNLOADREQUEST_H
#define FCASSETHANDLEDOWNLOADREQUEST_H

@class NSString;
@protocol FCOperationCanceling, FCOperationPrioritizing;

#import <Foundation/Foundation.h>


@interface FCAssetHandleDownloadRequest : NSObject <FCOperationCanceling, FCOperationPrioritizing>

 {
    id *_cancelHandler;
    id *_priorityHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger relativePriority; // ivar: _relativePriority
@property (readonly) Class superclass;


-(void)cancel;


@end


#endif