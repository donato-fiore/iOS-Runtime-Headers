// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELLIBRARYREQUESTOPERATION_H
#define MPMODELLIBRARYREQUESTOPERATION_H

@class NSOperationQueue;


#import "MPAsyncOperation.h"
#import "MPModelLibraryRequest.h"

@interface MPModelLibraryRequestOperation : MPAsyncOperation

@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy, nonatomic) MPModelLibraryRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (retain, nonatomic) NSOperationQueue *serialAccessQueue; // ivar: _serialAccessQueue


-(id)_itemProperties;
-(id)_libraryView;
-(id)_sectionProperties;
-(void)_executeLegacyRequest;
-(void)_executeRequest;
-(void)_sanityCheckRequest;
-(void)execute;


@end


#endif