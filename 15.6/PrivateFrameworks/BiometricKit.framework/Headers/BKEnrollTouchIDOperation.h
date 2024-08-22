// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKENROLLTOUCHIDOPERATION_H
#define BKENROLLTOUCHIDOPERATION_H

@protocol BKEnrollTouchIDOperationDelegate;


#import "BKEnrollOperation.h"
#import "BiometricKitStatistics.h"

@interface BKEnrollTouchIDOperation : BKEnrollOperation {
    BiometricKitStatistics *_statistics;
    ? _compSet;
}


@property (weak, nonatomic) NSObject<BKEnrollTouchIDOperationDelegate> *delegate;


-(BOOL)startWithError:(*id)arg0 ;
-(id)createEnrollProgressInfo:(unsigned int)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)enrollResult:(id)arg0 details:(id)arg1 client:(NSUInteger)arg2 ;
-(void)homeButtonPressed:(NSUInteger)arg0 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;


@end


#endif