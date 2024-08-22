// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMITASKSERVICE_H
#define HMITASKSERVICE_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMITaskService : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allowedClasses;
+(id)logCategory;
+(id)taskService;
+(id)taskServiceClient;
-(BOOL)cancelTask:(int)arg0 ;
-(id)initPrivate;
// -(int)submitTask:(id)arg0 progressHandler:(id)arg1 completionHander:(unk)arg2  ;
-(int)submitTaskWithOptions:(id)arg0 completionHandler:(id)arg1 ;
// -(int)submitTaskWithOptions:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif