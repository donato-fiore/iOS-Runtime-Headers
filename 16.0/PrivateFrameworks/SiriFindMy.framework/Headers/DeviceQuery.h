// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEVICEQUERY_H
#define DEVICEQUERY_H

@class INObject, NSString, INPerson, NSArray;



@interface DeviceQuery : INObject

@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, retain) INPerson *deviceOwner;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSArray *deviceTypeCategories;
@property (nonatomic, copy) NSString *deviceTypeOriginalInput;
@property (nonatomic, copy) NSString *productType;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif