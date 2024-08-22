// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GETTRUNKSTATUSINTENT_H
#define GETTRUNKSTATUSINTENT_H

@class INIntent, INSpeakableString;



@interface GetTrunkStatusIntent : INIntent

@property (nonatomic, retain) INSpeakableString *carName;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif