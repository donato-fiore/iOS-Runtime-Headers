// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOMEFILTER_H
#define HOMEFILTER_H

@class INObject, NSArray, NSString, NSNumber;



@interface HomeFilter : INObject

@property (nonatomic) NSInteger deviceType;
@property (nonatomic, copy) NSArray *entityIdentifiers;
@property (nonatomic, copy) NSString *entityName;
@property (nonatomic) NSInteger entityType;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) NSNumber *hasAllQuantifier;
@property (nonatomic, copy) NSString *homeName;
@property (nonatomic, retain) NSNumber *isExcludeFilter;
@property (nonatomic, copy) NSString *outerDeviceName;
@property (nonatomic) NSInteger outerDeviceType;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSString *zoneName;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif