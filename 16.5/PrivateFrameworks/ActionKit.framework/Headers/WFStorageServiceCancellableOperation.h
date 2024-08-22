// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSTORAGESERVICECANCELLABLEOPERATION_H
#define WFSTORAGESERVICECANCELLABLEOPERATION_H

@class NSString;
@protocol WFFileStorageServiceOperation;

#import <Foundation/Foundation.h>


@interface WFStorageServiceCancellableOperation : NSObject <WFFileStorageServiceOperation>



@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCancelBlock:(id)arg0 ;
-(void)cancel;


@end


#endif