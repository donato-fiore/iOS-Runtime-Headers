// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFETCHOPERATION_H
#define HKFETCHOPERATION_H

@class NSUUID, NSString;
@protocol HKFetchOperationDelegate;

#import <Foundation/Foundation.h>


@interface HKFetchOperation : NSObject

@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) NSObject<HKFetchOperationDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat executionTime; // ivar: _executionTime
@property (nonatomic) BOOL highPriority; // ivar: _highPriority
@property (readonly, nonatomic) NSString *operationDescription; // ivar: _operationDescription
@property (nonatomic) CGFloat queueTime; // ivar: _queueTime


-(id)initWithOperationDescription:(id)arg0 ;
-(void)_alertDelegateDidUpdatePriority;
-(void)startOperationWithCompletion:(id)arg0 ;
-(void)stopOperation;


@end


#endif