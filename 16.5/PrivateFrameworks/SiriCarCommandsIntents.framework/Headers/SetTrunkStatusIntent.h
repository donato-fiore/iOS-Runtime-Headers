// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SETTRUNKSTATUSINTENT_H
#define SETTRUNKSTATUSINTENT_H

@class INIntent, INSpeakableString;



@interface SetTrunkStatusIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;
@property (nonatomic) NSInteger trunkStatus;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif