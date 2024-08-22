// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMPCSESSIONCONTROLLER_H
#define HMDMPCSESSIONCONTROLLER_H

@class HMFObject, NSOperationQueue;
@protocol HMMLogEventSubmitting;



@interface HMDMPCSessionController : HMFObject

@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly, nonatomic) NSOperationQueue *speakerGroupCommandOperationQueue; // ivar: _speakerGroupCommandOperationQueue


-(id)initWithLogEventSubmitter:(id)arg0 ;
-(void)executeSessionWithSessionData:(id)arg0 completion:(id)arg1 ;


@end


#endif