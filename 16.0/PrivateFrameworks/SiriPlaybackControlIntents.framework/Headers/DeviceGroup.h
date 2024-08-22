// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEVICEGROUP_H
#define DEVICEGROUP_H

@class INObject, NSString, NSNumber, NSArray;



@interface DeviceGroup : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) NSNumber *excludeGroup;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) NSNumber *includesTVs;
@property (nonatomic, copy) NSArray *streams;
@property (nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif