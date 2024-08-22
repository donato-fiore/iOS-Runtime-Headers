// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSENDRIDEFEEDBACKINTENTRESPONSE_H
#define INSENDRIDEFEEDBACKINTENTRESPONSE_H



#import "INIntentResponse.h"

@interface INSendRideFeedbackIntentResponse : INIntentResponse

@property (readonly, nonatomic) NSInteger code;


+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)_initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif