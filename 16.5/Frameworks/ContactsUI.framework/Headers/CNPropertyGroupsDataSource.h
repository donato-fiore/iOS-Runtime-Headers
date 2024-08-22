// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPROPERTYGROUPSDATASOURCE_H
#define CNPROPERTYGROUPSDATASOURCE_H

@class CNContactStore, NSDictionary, CNMutableContact, CNPolicy, NSArray;

#import <Foundation/Foundation.h>


@interface CNPropertyGroupsDataSource : NSObject

@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSDictionary *linkedPoliciesByContactIdentifier; // ivar: _linkedPoliciesByContactIdentifier
@property (retain, nonatomic) CNMutableContact *mutableContact; // ivar: _mutableContact
@property (retain, nonatomic) CNPolicy *policy; // ivar: _policy
@property (retain, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (retain, nonatomic) NSDictionary *propertyGroups; // ivar: _propertyGroups


-(Class)groupClassForProperty:(id)arg0 ;
-(id)allDisplayPropertyItemsForPropertyKeys:(id)arg0 ;
-(id)allDisplayPropertyItemsFromGroups:(id)arg0 ;
-(id)initWithMutableContact:(id)arg0 contactStore:(id)arg1 policy:(id)arg2 linkedPolicies:(id)arg3 prohibitedKeys:(id)arg4 ;
-(id)propertyGroupsForKeys:(id)arg0 ;
-(void)buildPropertyGroups;


@end


#endif