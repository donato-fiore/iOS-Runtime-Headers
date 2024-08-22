// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EMREMOTECONTENTDATATASKINFO_H
#define _EMREMOTECONTENTDATATASKINFO_H

@class NSData, NSURLSessionDataTask, NSString;
@protocol EFCancelable, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface _EMRemoteContentDataTaskInfo : NSObject <EFCancelable>

 {
    NSObject<OS_dispatch_data> *_data;
}


@property (readonly, copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURLSessionDataTask *dataTask; // ivar: _dataTask
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCollectMetrics; // ivar: _didCollectMetrics
@property (nonatomic) BOOL didComplete; // ivar: _didComplete
@property (readonly, nonatomic) BOOL failOpen; // ivar: _failOpen
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSynthetic; // ivar: _isSynthetic
@property (readonly) Class superclass;


-(id)initWithDataTask:(id)arg0 isSynthetic:(BOOL)arg1 failOpen:(BOOL)arg2 completion:(id)arg3 ;
-(void)cancel;
-(void)finishWithError:(id)arg0 ;
-(void)receiveData:(id)arg0 ;


@end


#endif