// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPEAKABLELOCATION_H
#define SPEAKABLELOCATION_H

@class INObject, NSString, NSArray, NSNumber, INSpeakableString, CLLocation;



@interface SpeakableLocation : INObject

@property (nonatomic, copy) NSString *administrativeArea;
@property (nonatomic, copy) NSArray *areasOfInterest;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *fullThoroughfare;
@property (nonatomic, retain) NSNumber *isCoarse;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) INSpeakableString *locality;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) INSpeakableString *name;
@property (nonatomic, copy) NSString *subThoroughfare;
@property (nonatomic, copy) NSString *thoroughfare;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif