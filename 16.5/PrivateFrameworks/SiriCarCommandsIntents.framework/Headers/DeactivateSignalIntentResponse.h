// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEACTIVATESIGNALINTENTRESPONSE_H
#define DEACTIVATESIGNALINTENTRESPONSE_H

@class INIntentResponse, NSNumber;



@interface DeactivateSignalIntentResponse : INIntentResponse

@property (nonatomic, retain) NSNumber *carSignal;
@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic, retain) NSNumber *signalActivated;


-(id)init;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif