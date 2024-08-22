// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FINDFRIENDINTENTRESPONSE_H
#define FINDFRIENDINTENTRESPONSE_H

@class INIntentResponse;


#import "INFriendLocation.h"
#import "SpeakableLocation.h"

@interface FindFriendIntentResponse : INIntentResponse

@property (nonatomic) NSInteger code; // ivar: code
@property (nonatomic, retain) INFriendLocation *friendLocation;
@property (nonatomic, retain) SpeakableLocation *userLocation;


-(id)init;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertiesByName:(id)arg0 ;


@end


#endif