// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMPMEDIAENTITIESFETCHOPERATION_H
#define VUIMPMEDIAENTITIESFETCHOPERATION_H

@class VUIAsynchronousOperation, NSError, NSOperationQueue, NSArray;


#import "VUIMPMediaLibrary.h"

@interface VUIMPMediaEntitiesFetchOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) VUIMPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (copy, nonatomic) NSArray *requests; // ivar: _requests
@property (copy, nonatomic) NSArray *responses; // ivar: _responses


-(id)init;
-(id)initWithMediaLibrary:(id)arg0 requests:(id)arg1 ;
-(void)executionDidBegin;


@end


#endif