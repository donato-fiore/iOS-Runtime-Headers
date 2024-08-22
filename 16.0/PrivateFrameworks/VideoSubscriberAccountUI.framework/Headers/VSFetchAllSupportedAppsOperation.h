// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSFETCHALLSUPPORTEDAPPSOPERATION_H
#define VSFETCHALLSUPPORTEDAPPSOPERATION_H

@class VSAsyncOperation, NSOperationQueue, VSOptional;



@interface VSFetchAllSupportedAppsOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSOptional *result; // ivar: _result


-(id)init;
-(void)executionDidBegin;


@end


#endif