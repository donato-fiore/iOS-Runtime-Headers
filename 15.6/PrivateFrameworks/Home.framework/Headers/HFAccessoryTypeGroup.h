// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYTYPEGROUP_H
#define HFACCESSORYTYPEGROUP_H

@class NSString, NSSet, NSUUID;
@protocol HFAccessoryRepresentableObjectFiltering;

#import <Foundation/Foundation.h>


@interface HFAccessoryTypeGroup : NSObject <HFAccessoryRepresentableObjectFiltering>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *types; // ivar: _types
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)accessoryTypeGroupWithIdentifier:(id)arg0 ;
+(id)climateAccessoryTypeGroup;
+(id)lightAccessoryTypeGroup;
+(id)mediaAccessoryTypeGroup;
+(id)securityAccessoryTypeGroup;
+(id)sensorAccessoryTypeGroup;
+(id)unionGroups:(id)arg0 ;
+(id)waterAccessoryTypeGroup;
-(id)_initWithIdentifier:(id)arg0 name:(id)arg1 set:(id)arg2 ;
-(id)_initWithIdentifierString:(id)arg0 name:(id)arg1 accessoryTypes:(id)arg2 ;
-(id)_initWithName:(id)arg0 set:(id)arg1 ;
-(id)filterAccessoryRepresentableObjects:(id)arg0 ;
-(id)groupByIntersectingGroup:(id)arg0 ;
-(id)groupBySubtractingGroup:(id)arg0 ;
-(id)groupByUnioningGroup:(id)arg0 ;
-(id)initWithAccessoryTypes:(id)arg0 ;
-(id)initWithName:(id)arg0 accessoryTypes:(id)arg1 ;


@end


#endif