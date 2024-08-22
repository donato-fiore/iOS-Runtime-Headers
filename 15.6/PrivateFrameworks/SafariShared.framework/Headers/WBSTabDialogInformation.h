// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTABDIALOGINFORMATION_H
#define WBSTABDIALOGINFORMATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WBSTabDialogInformation : NSObject {
    id *_dismissalBlock;
    BOOL _isInvokingPresentationBlock;
    id *_presentationBlock;
}


@property (readonly, nonatomic, getter=isBlockingWebProcess) BOOL blockingWebProcess; // ivar: _blockingWebProcess
@property (copy, nonatomic) NSArray *cancellationExemptions; // ivar: _cancellationExemptions
@property (readonly, nonatomic, getter=isDismissed) BOOL dismissed; // ivar: _dismissed
@property (readonly, nonatomic, getter=isPresented) BOOL presented; // ivar: _presented
@property (nonatomic) ? slot; // ivar: _slot


-(BOOL)isExemptFromCancellationInContext:(id)arg0 ;
-(id)description;
// -(id)initWithPresentationBlock:(id)arg0 dismissalBlock:(unk)arg1 blocksWebProcessUntilDismissed:(id)arg2  ;
-(void)dismissWithResponse:(id)arg0 ;
-(void)presentIfNeeded;


@end


#endif