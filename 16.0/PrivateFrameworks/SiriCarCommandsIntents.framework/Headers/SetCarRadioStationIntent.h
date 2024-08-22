// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SETCARRADIOSTATIONINTENT_H
#define SETCARRADIOSTATIONINTENT_H

@class INIntent, NSString, NSNumber;



@interface SetCarRadioStationIntent : INIntent

@property (nonatomic) NSInteger band;
@property (nonatomic, copy) NSString *callsign;
@property (nonatomic, retain) NSNumber *channel;
@property (nonatomic, retain) NSNumber *frequency;
@property (nonatomic, copy) NSString *name;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif