// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKMATCHTOUCHIDOPERATION_H
#define BKMATCHTOUCHIDOPERATION_H

@protocol BKMatchTouchIDOperationDelegate;


#import "BKMatchOperation.h"

@interface BKMatchTouchIDOperation : BKMatchOperation

@property (weak, nonatomic) NSObject<BKMatchTouchIDOperationDelegate> *delegate;
@property (nonatomic) BOOL requireFingerOff; // ivar: _requireFingerOff


-(id)optionsDictionaryWithError:(*id)arg0 ;
-(void)statusMessage:(unsigned int)arg0 client:(NSUInteger)arg1 ;


@end


#endif