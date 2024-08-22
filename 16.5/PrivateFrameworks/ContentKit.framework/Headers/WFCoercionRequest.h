// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOERCIONREQUEST_H
#define WFCOERCIONREQUEST_H

@class NSArray, WFFileType;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "WFCoercionOptions.h"

@interface WFCoercionRequest : NSObject <NSCopying>



@property (readonly, nonatomic) id *contentCollectionResultHandler; // ivar: _contentCollectionResultHandler
@property (readonly, nonatomic) NSArray *contentItemClasses; // ivar: _contentItemClasses
@property (readonly, nonatomic) id *contentItemsCompletionHandler; // ivar: _contentItemsCompletionHandler
@property (readonly, nonatomic) id *fileRepresentationResultHandler; // ivar: _fileRepresentationResultHandler
@property (readonly, nonatomic) WFFileType *fileType; // ivar: _fileType
@property (readonly, nonatomic) Class objectClass; // ivar: _objectClass
@property (readonly, nonatomic) id *objectRepresentationResultHandler; // ivar: _objectRepresentationResultHandler
@property (retain, nonatomic) WFCoercionOptions *options; // ivar: _options
@property (readonly, nonatomic) NSInteger requestType; // ivar: _requestType


+(id)_requestForCoercingToContentClasses:(id)arg0 itemCompletionHandler:(id)arg1 ;
+(id)requestForCoercingToContentClasses:(id)arg0 completionHandler:(id)arg1 ;
+(id)requestForCoercingToFileType:(id)arg0 completionHandler:(id)arg1 ;
+(id)requestForCoercingToObjectClass:(Class)arg0 completionHandler:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)completeContentItemCoercionRequestWithResultItems:(id)arg0 originalItem:(id)arg1 error:(id)arg2 ;


@end


#endif