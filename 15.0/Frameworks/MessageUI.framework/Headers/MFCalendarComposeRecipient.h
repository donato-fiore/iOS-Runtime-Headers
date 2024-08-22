// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCALENDARCOMPOSERECIPIENT_H
#define MFCALENDARCOMPOSERECIPIENT_H

@class NSString;


#import "MFComposeRecipient.h"

@interface MFCalendarComposeRecipient : MFComposeRecipient {
    NSString *_calAttendeeName;
    id *_participant;
}


@property (retain, nonatomic) id *participant;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)displayString;
-(id)initWithComposeRecipient:(id)arg0 ;
-(void)setCalAttendeeName:(id)arg0 ;


@end


#endif