// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIFAMILYMEMBERCONTACTSEDITINGSTRATEGY_H
#define CNUIFAMILYMEMBERCONTACTSEDITINGSTRATEGY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNUIFamilyMemberContactsEditingStrategy : NSObject

@property (readonly, nonatomic) NSArray *prohibitedPropertyKeys; // ivar: _prohibitedPropertyKeys
@property (readonly, nonatomic) id *sensitiveDataContactFilter; // ivar: _sensitiveDataContactFilter


+(id)managedContactsStrategy;
+(id)whitelistedContactsStrategy;
-(id)initWithProhibitedPropertyKeys:(id)arg0 sensitiveDataContactFilter:(id)arg1 ;


@end


#endif