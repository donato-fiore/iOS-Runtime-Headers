// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSTARGETINGVALIDATEOPERATION_H
#define TPSTARGETINGVALIDATEOPERATION_H

@class TPSAsyncOperation, NSString;


#import "TPSTargetingValidation.h"

@interface TPSTargetingValidateOperation : TPSAsyncOperation

@property (copy, nonatomic) NSString *context; // ivar: _context
@property (nonatomic) NSInteger result; // ivar: _result
@property (readonly, nonatomic) TPSTargetingValidation *validator; // ivar: _validator


-(id)description;
-(id)initWithTargetingCondition:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif