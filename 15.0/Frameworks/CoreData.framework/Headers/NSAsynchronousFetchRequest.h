// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSASYNCHRONOUSFETCHREQUEST_H
#define NSASYNCHRONOUSFETCHREQUEST_H



#import "NSPersistentStoreRequest.h"
#import "NSFetchRequest.h"

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest

@property (readonly) id *completionBlock; // ivar: _requestCompletionBlock
@property (nonatomic) NSInteger estimatedResultCount; // ivar: _estimatedResultCount
@property (readonly) NSFetchRequest *fetchRequest; // ivar: _fetchRequest


-(NSUInteger)requestType;
-(id)description;
-(id)initWithFetchRequest:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif