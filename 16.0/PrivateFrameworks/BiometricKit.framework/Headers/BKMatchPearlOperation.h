// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKMATCHPEARLOPERATION_H
#define BKMATCHPEARLOPERATION_H

@protocol BKMatchPearlOperationDelegate;


#import "BKMatchOperation.h"
#import "BKIdentity.h"

@interface BKMatchPearlOperation : BKMatchOperation

@property (weak, nonatomic) NSObject<BKMatchPearlOperationDelegate> *delegate;
@property (nonatomic) BOOL fullFaceOnly; // ivar: _fullFaceOnly
@property (nonatomic) BOOL longTimeout; // ivar: _longTimeout
@property (nonatomic) BOOL preAugmentationCheck; // ivar: _preAugmentationCheck
@property (retain, nonatomic) BKIdentity *preAugmentationCheckIdentity; // ivar: _preAugmentationCheckIdentity
@property (nonatomic) BOOL shouldAutoRetry; // ivar: _shouldAutoRetry


-(BOOL)enableAutoRetry:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)pauseFaceDetectTimer:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)startNewMatchAttemptWithError:(*id)arg0 ;
-(id)matchResultInfoWithServerIdentity:(id)arg0 details:(id)arg1 ;
-(id)optionsDictionaryWithError:(*id)arg0 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;
-(void)statusMessage:(unsigned int)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;


@end


#endif