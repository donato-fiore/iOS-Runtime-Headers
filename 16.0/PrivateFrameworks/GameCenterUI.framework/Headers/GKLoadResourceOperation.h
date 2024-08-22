// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLOADRESOURCEOPERATION_H
#define GKLOADRESOURCEOPERATION_H

@class NSOperation;



@interface GKLoadResourceOperation : NSOperation

@property (nonatomic, setter=_setLoadReason:) NSInteger _loadReason; // ivar: __loadReason
@property (copy) id *outputBlock; // ivar: _outputBlock


-(void)didCompleteWithResource:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif