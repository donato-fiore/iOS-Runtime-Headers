// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKMOCKUIALERT_H
#define TSKMOCKUIALERT_H



#import "TSKUIAlert.h"

@interface TSKMockUIAlert : TSKUIAlert



+(void)setDismissalButtonIndex:(NSInteger)arg0 ;
-(NSInteger)cancelButtonIndex;
-(NSInteger)firstOtherButtonIndex;
-(id)initWithTitle:(id)arg0 message:(id)arg1 cancelButtonTitle:(id)arg2 otherButtonTitle:(id)arg3 ;
-(void)showWithDismissedByButtonBlock:(id)arg0 ;


@end


#endif