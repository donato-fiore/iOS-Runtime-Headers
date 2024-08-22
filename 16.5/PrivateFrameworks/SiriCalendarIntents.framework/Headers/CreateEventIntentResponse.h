// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CREATEEVENTINTENTRESPONSE_H
#define CREATEEVENTINTENTRESPONSE_H

@class INIntentResponse, NSArray, NSString;



@interface CreateEventIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic) NSInteger confirmationReason;
@property (nonatomic, copy) NSArray *conflictingEventIdentifiers;
@property (nonatomic, copy) NSString *createdEvent;


-(id)init;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertiesByName:(id)arg0 ;


@end


#endif