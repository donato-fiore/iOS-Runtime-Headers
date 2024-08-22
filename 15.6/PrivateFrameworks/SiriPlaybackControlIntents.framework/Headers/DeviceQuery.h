// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEVICEQUERY_H
#define DEVICEQUERY_H

@class INObject, NSString, NSNumber;



@interface DeviceQuery : INObject

@property (nonatomic, copy) NSString *accessoryName;
@property (nonatomic, copy) NSString *deviceQuantifierString;
@property (nonatomic, copy) NSString *deviceTypeString;
@property (nonatomic, retain) NSNumber *fromEntity;
@property (nonatomic, copy) NSString *placeHintString;
@property (nonatomic, copy) NSString *referenceString;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSString *serviceGroup;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, copy) NSString *zoneName;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif