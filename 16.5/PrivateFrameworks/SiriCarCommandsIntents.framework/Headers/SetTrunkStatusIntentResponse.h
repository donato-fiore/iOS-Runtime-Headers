// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SETTRUNKSTATUSINTENTRESPONSE_H
#define SETTRUNKSTATUSINTENTRESPONSE_H

@class INIntentResponse;



@interface SetTrunkStatusIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: code


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif