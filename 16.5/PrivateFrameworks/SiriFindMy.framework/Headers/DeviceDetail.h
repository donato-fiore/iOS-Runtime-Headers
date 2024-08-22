// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEVICEDETAIL_H
#define DEVICEDETAIL_H

@class INObject, NSNumber, NSString, INPerson;


#import "SpeakableLocation.h"

@interface DeviceDetail : INObject

@property (nonatomic, retain) NSNumber *canPlaySound;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic, copy) NSString *deviceClassSemantic;
@property (nonatomic) NSInteger deviceLocality;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, retain) INPerson *deviceOwner;
@property (nonatomic) NSInteger deviceSpecificityLevel;
@property (nonatomic, copy) NSString *emoji;
@property (nonatomic, retain) NSNumber *isEarbuds;
@property (nonatomic, retain) NSNumber *isHeadphones;
@property (nonatomic, retain) NSNumber *isThisDevice;
@property (nonatomic, retain) SpeakableLocation *location;
@property (nonatomic, copy) NSString *productName;
@property (nonatomic, copy) NSString *productNameSemantic;
@property (nonatomic, copy) NSString *productType;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif