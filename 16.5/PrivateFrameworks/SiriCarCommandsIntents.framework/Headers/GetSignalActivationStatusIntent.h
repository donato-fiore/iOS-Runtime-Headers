// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETSIGNALACTIVATIONSTATUSINTENT_H
#define GETSIGNALACTIVATIONSTATUSINTENT_H

@class INIntent, INSpeakableString, NSNumber;



@interface GetSignalActivationStatusIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;
@property (nonatomic, retain) NSNumber *carSignal;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif