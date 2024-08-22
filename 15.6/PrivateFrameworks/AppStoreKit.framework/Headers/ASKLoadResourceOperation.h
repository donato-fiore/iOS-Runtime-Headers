// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASKLOADRESOURCEOPERATION_H
#define ASKLOADRESOURCEOPERATION_H

@class NSOperation;



@interface ASKLoadResourceOperation : NSOperation

@property (nonatomic, setter=_setLoadReason:) NSInteger _loadReason; // ivar: __loadReason
@property (copy) id *outputBlock; // ivar: _outputBlock


+(id)supportedScheme;
-(id)initWithURLRequest:(id)arg0 dataConsumer:(id)arg1 ;
-(void)didCompleteWithResource:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif