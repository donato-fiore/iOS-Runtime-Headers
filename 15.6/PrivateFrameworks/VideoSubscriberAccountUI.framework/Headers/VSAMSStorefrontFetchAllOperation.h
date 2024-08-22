// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSAMSSTOREFRONTFETCHALLOPERATION_H
#define VSAMSSTOREFRONTFETCHALLOPERATION_H

@class VSAsyncOperation, NSOperationQueue, VSOptional;



@interface VSAMSStorefrontFetchAllOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSOptional *result; // ivar: _result


-(id)init;
-(void)executionDidBegin;


@end


#endif